#ifndef DTTIME_H
#define DTTIME_H
#include <string>

using namespace std;

class DtTime
{
    private:
        int hour;
        int minute;
    public:
        int getHours();
        int getMinutes();

        string toString();

        DtTime(int hours, int minutes);
        virtual ~DtTime();
};

#endif // DTTIME_H
