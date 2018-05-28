	
    void testDate (void)
    {
        Date date;
        cout << "Aujourd'hui nous sommes le : " 
             << date.getDay () << ' ' << date.getMonth () << ' ' << date.getYear ()
             << " et il est " << date.getHour () << "h " << date.getMinute () 
             << "mn et " <<date.getSecond () << 's' << endl;
    
    } // testDate()