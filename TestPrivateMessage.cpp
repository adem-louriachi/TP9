    class User
    {
       public :
       void sendMessage (const PrivateMessage & message)
       {
           message.displayContent ();
           cout << endl;
       } // sendMessage()
       void addFriend (const User & friend) { cout << "ajouté" << endl; }
       User getFriend (unsigned i) const { cout << i << endl; return User (); }
       System * getSystem (void) const { cout << "système" << endl; return NULL; }
       void addMessage (const PrivateMessage & message) { cout << message << endl; }
       
    }; // User
    
    void testPrivateMessage (void)
    {
        User user;
        PrivateMessage message ("salut", & user);
        message.displayContent ();
        cout << " posté le : ";
        displayDate (message.getDate ());
        cout << " à ";
        displayHour (message.getDate ());
        cout << endl;
        message.getSender ()->getFriend (5);
 
    } // testPrivateMessage()