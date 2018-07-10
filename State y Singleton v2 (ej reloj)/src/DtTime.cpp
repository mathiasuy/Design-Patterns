#include "../include/DtTime.h"
#include "Utils.h"

DtTime::DtTime(int hours, int minutes):hour(hours),minute(minutes)
{}

DtTime::~DtTime()
{
    //dtor
}

int DtTime::getHours(){
    return this->hour;
};

int DtTime::getMinutes(){
    return this->minute;
};

string DtTime::toString(){
    return Utils::aString(this->getHours()) + ":" + (this->getMinutes()<10?"0":"") + Utils::aString(this->getMinutes());
};
