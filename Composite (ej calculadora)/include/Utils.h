#ifndef UTILS_H
#define UTILS_H
#include <string>
#include <sstream> // stringstream
#include <iomanip> // setprecision
#include <sstream> // stringstream
#include <stdio.h>
#include <stdlib.h>

#include "TipoOperacion.h"

using namespace std;

class Utils
{
    public:
        static std::string aString (int arg);
        static std::string aString (float arg);
        static string aString(TipoOperacion t);
        static TipoOperacion deString(string operacion);
};

#endif // UTILS_H
