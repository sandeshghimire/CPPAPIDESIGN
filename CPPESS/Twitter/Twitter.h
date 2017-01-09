//
// Created by Sandesh Ghimire on 11/11/2016.
//

#ifndef PROJECT_TWITTER_H
#define PROJECT_TWITTER_H


#include <string>

enum T_AUTH {
    AUTH_FAIL,
    AUTH_PASS
};

class Twitter {
public:
    Twitter();
    virtual ~Twitter();

    T_AUTH authenticate(std::string username, std::string passwrod);
};




#endif //PROJECT_TWITTER_H
