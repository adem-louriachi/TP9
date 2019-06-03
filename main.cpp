#include <iostream>
#include <Date.h>

using namespace std;

void testDate (void)
    {
        Date date;
        cout << "Aujourd'hui nous sommes le : "
             << date.GetDay() << '/' << date.GetMonth () << '/' << date.GetYear ()
             << " et il est " << date.GetHour () << "h " << date.GetMin ()
             << "mn et " << date.GetSec() << " secondes ça va Ange" << endl;
};

int main(void) {
    testDate();
}
