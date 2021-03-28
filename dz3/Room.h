//
// Created by Elizaveta on 02.03.2021.
//

#ifndef UNTITLED5_ROOM_H
#define UNTITLED5_ROOM_H
#include <string>
#include <map>
#include "accesslevel.h"
//#include "User.h"

using namespace std;

class User;

enum type {
    CLASSROOM, LECTURE_ROOM, CONFERENCE_ROOM, CABINET, DIRECTOR_ROOM
};

class Room {
private:
    type troom; //troom - type of room
    string numroom;
    accesslevel access;

public:
    map<User*, bool> dostup;

    accesslevel getAccess() const;
    Room(type troom, const string &numroom, accesslevel access);

    Room(accesslevel accesslevel);
};


#endif //UNTITLED5_ROOM_H
