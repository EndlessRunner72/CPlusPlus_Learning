#include<fstream>       // Managing the files
#include<string>        // getline
#include<iostream>      // Basic input and output
    
#include<cstdlib>       //rand(), srand()
#include<ctime>         //timestamp, time, tm, time_t
#include<iomanip>       // put_time

#include<thread>
#include<chrono>        // seconds
using namespace std;

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

int main(){
    srand(time(0));

    int log_type, inner_log;
    string log_line;
    time_t timestamp;
    tm *ist_time;

    while(1){
        log_type = rand() % 101;    // 0 to 100
        inner_log = rand() % 40;    // 0 to 39

        time(&timestamp);
        ist_time = localtime(&timestamp);
        
        ofstream output_stream("./output_log_files/app_log.txt", ios::app);
        if (!output_stream) {
            cerr << "Error: Could not open output log file!" << endl;
            break;
        }

        output_stream << put_time(ist_time, "%b %d %H:%M:%S") << " ";

        if (log_type <= 80)                                 // INFO
        {
            ifstream info_input_stream("./log_input_files/info_logs.txt");
            log_line = get_log(info_input_stream, inner_log); // 0 is 1st line and 39 is last line (imagine pointers)
            output_stream << "[INFO]:" << log_line << endl;
            info_input_stream.close();

        } else if (log_type > 80 && log_type <=90)          // DEBUG
        {
            ifstream debug_input_stream("./log_input_files/debug_logs.txt");
            log_line = get_log(debug_input_stream, inner_log);
            output_stream << "[DEBUG]:" <<  log_line << endl;
            debug_input_stream.close();
        }
        else if (log_type > 90 && log_type <= 95)           // WARN
        {
            ifstream warn_input_stream("./log_input_files/warn_logs.txt");
            log_line = get_log(warn_input_stream, inner_log);
            output_stream << "[WARN]:" <<  log_line << endl;
            warn_input_stream.close();
        }
        else                                                // ERROR
        {
            ifstream error_input_stream("./log_input_files/error_logs.txt");
            log_line = get_log(error_input_stream, inner_log);
            output_stream << "[ERROR]:" <<  log_line << endl;
            error_input_stream.close();
        }        
        
        output_stream.close();
        this_thread::sleep_for(chrono::seconds(2));
    }
}