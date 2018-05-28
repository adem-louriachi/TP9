    void testPublicMessage (void)
    {
        PublicMessage message ("salut");
        message.displayContent ();
        cout << " posté le : ";
        displayDate (message.getDate ());
        cout << " à ";
        displayHour (message.getDate ());
        cout << endl;
        for (unsigned i(0); i < 5; ++i)
            message.add ();
        cout << "Nb de likers : " << message.getNbLikers (); << endl;
 
    } // testPublicMessage()