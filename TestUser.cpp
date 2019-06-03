//    void testUser (void)
//    {
//        System oneSystem;
//        User alfred    ("Alfred", NULL);
//        User alain     ("Alain", NULL);
//        User sophie    ("Sophie", NULL);
//        User emmanuel  ("Emmanuel", NULL);
//        User christian ("Christian", NULL);
//        User petru     ("Petru", NULL);
//        User marc      ("Marc", NULL);
//        PrivateMessage message ("salut", & alfred);
//        message.displayContent ();
//        cout << endl;
 
//        alain.addFriend (&sophie);
//        alain.addFriend (&emmanuel);
//        alain.addFriend (&christian);
//        alain.addFriend (&petru);
//        alain.addFriend (&marc);
 
//        cout << "Alain a " << alain.getNbFriends () << " amis" << endl;
//        cout << "Le troisième ami d'Alain est : " << (alain.getFriend (2))->getName () << endl;
 
//        alfred.addMessage (message);
//        alain.sendMessage (&message);
//        cout << "Nombre de message envoyés par Alfred : " << alfred.getNbSentMessages ()   << endl;
//        cout << "Nombre de message reçus par Alfred : " << alfred.getNbRecievedMessages () << endl;
//        cout << "Nombre de message envoyés par Alain : " << alain.getNbSentMessages ()   << endl;
//        cout << "Nombre de message reçus par Alain : " << alain.getNbRecievedMessages () << endl;
//        alain.getRecievedMessage (0)->displayContent ();
//        cout << endl;
//        alfred.getSentMessage (0).displayContent ();
//        cout << endl;
 
//    } // testUser()
