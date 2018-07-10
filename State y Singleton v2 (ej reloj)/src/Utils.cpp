#include "../include/Utils.h"
#include <string>
#ifdef WIN32
    std::string aS(int arg){
        char buffer[33];
        char* ss = itoa(arg,buffer,10);
        return std::string(ss);
    }
#else //In any other OS
    std::string aS(int arg){
        std::string ss =  std::to_string(arg);
        return ss;
    }
#endif // _WIN32

using namespace std;

Utils::Utils()
{
    //ctor
}

Utils::~Utils()
{
    //dtor
}


std::string Utils::aString (int arg){
    return aS(arg);
}

std::string Utils::aString (float arg){
    std::stringstream stream;
    stream << std::fixed << std::setprecision(4) << arg;
    return stream.str();
}
