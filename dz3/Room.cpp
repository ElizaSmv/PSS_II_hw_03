//
// Created by Elizaveta on 02.03.2021.
//

#include "Room.h"


Room::Room(type troom, const string &numroom, accesslevel access) : troom(troom), numroom(numroom), access(access) {}

accesslevel Room::getAccess() const {
    return access;
}

Room::Room(accesslevel accesslevel) {

}
