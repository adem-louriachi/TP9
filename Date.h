#ifndef DATE_H
#define DATE_H
#include <ctime>

class Date : private tm {
public:

    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;
    int GetHour() const;
    int GetMin() const;
    int GetSec() const;

    Date();

};

#endif // DATE_H
