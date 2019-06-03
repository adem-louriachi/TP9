#include <iostream>
#include <ctime>
#include "Date.h"

using namespace std;

Date::Date () {

    time_t t;
    time (&t);

    tm local = * localtime (& t);

    tm_year = local.tm_year;
    tm_mon = local.tm_mon;
    tm_mday = local.tm_mday;
    tm_hour = local.tm_hour;
    tm_min = local.tm_min;
    tm_sec = local.tm_sec;
    tm_wday = local.tm_wday;
    tm_yday = local.tm_yday;
    tm_isdst = local.tm_isdst;
}
int Date::GetYear() const {return tm_year + 1900;}
int Date::GetMonth() const {return tm_mon + 1;}
int Date::GetDay() const {return tm_mday;}
int Date::GetHour() const {return tm_hour;}
int Date::GetMin() const {return tm_min;}
int Date::GetSec() const {return tm_sec;}


