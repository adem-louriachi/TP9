#include <iostream>
#include "publicmessage.h"
#include "message.h"

using namespace std;

PublicMessage::PublicMessage(const string & content) : Message(content), myNbLikers(0){}

unsigned PublicMessage::getNbLikers()
{
    return myNbLikers;
}

void PublicMessage::add()
{
    ++myNbLikers;
}

