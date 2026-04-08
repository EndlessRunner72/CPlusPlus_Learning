#include<fstream>       // Managing the files
#include<filesystem>    // to get filesize()
#include<string>        // getline
#include<iostream>      // Basic input and output
    
#include<cstdlib>       //rand(), srand()
#include<ctime>         //timestamp, time, tm, time_t
#include<iomanip>       // put_time
#include<sstream>       // To convert output of put_time to string

#include<thread>
#include<chrono>        // seconds
#include<atomic>        // So both threads see instantly

#include<vector>
using namespace std;

atomic<bool> is_rotating = false;

string get_log(ifstream &input_stream, int logline){
    if (!input_stream) {
        cerr << "Error: Could not open input log file!" << endl;
        return "";
    }

    int line_number = 0;
    string log;
    
    input_stream.clear();
    input_stream.seekg(0);

    while (getline(input_stream, log))
    {   
        if (line_number == logline)
        {
            return log;
        }
        line_number++;
    }
    return "No logs found";
}

// Purpose: 0 = ":" format for displaying time in log, 1 for "_" format for naming files
string get_timestring(int purpose){
    string time_string;
    time_t timestamp;
    tm *ist_time;
    ostringstream oss;

    time(&timestamp);
    ist_time = localtime(&timestamp);

    oss.str("");   // Clears the content
    oss.clear();   // Resets any error flags

    if (purpose == 0)
    {
        oss << put_time(ist_time, "%b %d %H:%M:%S");
    }
    else
    {
        oss << put_time(ist_time, "%b_%d_%H_%M_%S");
    }
    
    
    time_string = oss.str();
    return time_string;
}

void generator(){
    vector<string> buffer_vector;
    srand(time(0));

    int log_type, inner_log;
    string log_line;

    while(1){
        log_type = rand() % 101;    // 0 to 100
        inner_log = rand() % 40;    // 0 to 39

        if (log_type <= 80)                                 // INFO
        {
            ifstream info_input_stream("./log_input_files/info_logs.txt");
            log_line = get_timestring(0) + " [INFO]:" + get_log(info_input_stream, inner_log); // 0 is 1st line and 39 is last line (imagine pointers)
            info_input_stream.close();

        } else if (log_type > 80 && log_type <=90)          // DEBUG
        {
            ifstream debug_input_stream("./log_input_files/debug_logs.txt");
            log_line = get_timestring(0) + " [DEBUG]:" + get_log(debug_input_stream, inner_log);
            debug_input_stream.close();
        }
        else if (log_type > 90 && log_type <= 95)           // WARN
        {
            ifstream warn_input_stream("./log_input_files/warn_logs.txt");
            log_line = get_timestring(0) + " [WARN]:" + get_log(warn_input_stream, inner_log);
            warn_input_stream.close();
        }
        else                                                // ERROR
        {
            ifstream error_input_stream("./log_input_files/error_logs.txt");
            log_line = get_timestring(0) + " [ERROR]:" + get_log(error_input_stream, inner_log);
            error_input_stream.close();
        }        
        
        if (!is_rotating)
        {
            ofstream output_stream("./output_log_files/latest_app_logs.txt", ios::app);
            if (!output_stream) {
                cerr << "Error: Could not open output log file!" << endl;
                break;
            }

            if (!buffer_vector.empty())
            {
                for(string log : buffer_vector){
                    output_stream << log << endl;
                }
                buffer_vector.clear();
            }
            
            output_stream << log_line << endl;
            output_stream.close();
        }
        else
        {
            buffer_vector.push_back(log_line);
            cout << buffer_vector.back();
        }
        
        this_thread::sleep_for(chrono::seconds(2));
    }
}

void manage_files(){
    string recentfile_path = "./output_log_files/latest_app_logs.txt";

    while (1)
    {
        if (filesystem::exists(recentfile_path))
        {
            uintmax_t filesize = filesystem::file_size(recentfile_path);
            cout << "Filesize is currently: " << filesize << "Bytes" << endl;

            if (filesize >= 5000)
            {
                is_rotating = true;
                cout << "Threshold reached!!, Generating a new file" << endl;

                string newfile_path = "./output_log_files/";
                newfile_path += get_timestring(1) + "_logs.txt" ;
                filesystem::rename(recentfile_path, newfile_path);

                is_rotating = false;
            }
        }
        
        this_thread::sleep_for(chrono::seconds(2));
    }
}

int main(){
    thread generator_thread(generator);
    thread file_manager(manage_files);

    generator_thread.join();
    file_manager.join();
}