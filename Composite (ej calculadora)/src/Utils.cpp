#include "Utils.h"
#include "TipoOperacion.h"
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


TipoOperacion Utils::deString(string operacion){
    TipoOperacion t;

    if (operacion == "+"){
        t = su;
    }
    if (operacion == "-"){
        t = re;
    }
    if (operacion == "/"){
        t = di;
    }
    if (operacion == "*"){
        t = mu;
    }
    return t;
}

std::string Utils::aString(TipoOperacion o){
    string t;

    switch (o){
        case su : t = "+"; break;
        case re : t = "-"; break;
        case mu : t = "*"; break;
        case di : t = "/"; break;
    }
    return t;
}


std::string Utils::aString (int arg){
    return aS(arg);
}

std::string Utils::aString (float arg){
    std::stringstream stream;
    stream << std::fixed << std::setprecision(1) << arg;
    return stream.str();
}



