#ifndef PUBLICMESSAGE_H
#define PUBLICMESSAGE_H

#include <iostream>
#include "message.h"

class PublicMessage : public Message {
private:
    unsigned myNbLikers;
public:
    PublicMessage(const std::string & content);
    unsigned getNbLikers();

    void add();
};

#endif // PUBLICMESSAGE_H
