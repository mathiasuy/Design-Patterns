#include "../include/Hour.h"

Hour* Hour::instance = NULL;

Hour* Hour::getInstance(){
    if (Hour::instance == NULL){
        Hour::instance = new Hour();
    }
    return Hour::instance;
}

Hour::Hour()
{
}


Hour::~Hour()
{
    //dtor
}
