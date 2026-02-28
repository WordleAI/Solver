#include <cpr/cpr.h>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/error/en.h" 
#include <iomanip>
#include <ctime>
#include <sstream>
#include <string>

std::string getCurrentDayMonthYear() {
    // Get the current time in time_t format
    std::time_t t = std::time(nullptr);

    // Convert to local time structure (tm)
    std::tm tm = *std::localtime(&t);

    // Use stringstream to format the date into a string
    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d"); 
    
    return oss.str();
}
int nytimes_service()
{

    cpr::Response r = cpr::Get(cpr::Url{"https://www.nytimes.com/svc/wordle/v2/" + getCurrentDayMonthYear() + ".json"});
    rapidjson::Document doc;
    rapidjson::ParseResult pr = doc.Parse(r.text.c_str());  
    
    if (!pr){
        fprintf(stderr, "JSON parse error?: %s (offset: %u)\\n",
            rapidjson::GetParseError_En(pr.Code()),
            static_cast<unsigned>(pr.Offset()));
    }

    if (!doc.IsObject()) {
        cout << "Not an object error?";
    }

    if (doc.HasMember("id")) {
        int id = doc["id"].GetInt();
        cout << "ID: " << id << endl;
    }
    if (doc.HasMember("print_date")) {
        string print_date = doc["print_date"].GetString();
        cout << "Print Date: " << print_date << endl;
    }
    if (doc.HasMember("editor")) {
        string editor = doc["editor"].GetString();
        cout << "Editor: " << editor << endl;
    }
    if (doc.HasMember("solution")) {
        string sol = doc["solution"].GetString();
        cout << "Solution: " << sol << endl;
    }
    else {
        cout << "No Solution Found...";
    }

    return 0;
}