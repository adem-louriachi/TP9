#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
#include "Date.h"

class Message {
protected:

    std::string myContent;
    Date myDate;

public:

    void displayContent() const;

    Message(const std::string & content);

    Date getDate();

};

#endif // MESSAGE_H
