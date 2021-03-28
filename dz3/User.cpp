//
// Created by Elizaveta on 02.03.2021.
//

#include "User.h"

User::User(const string &name) : name(name) {}

User::User(const string &name, accesslevel level) : name(name), level(level) {}

accesslevel User::getLevel() const {
    return level;
}

User::~User() {

}

Student::Student(const string &name, const string &group) : User(name), group(group) {}

Student::Student(const string &name, accesslevel level, const string &group) : User(name, level), group(group) {}

Professor::Professor(const string &name, accesslevel level, const string &joke) : User(name, level), joke(joke) {}

Professor::Professor(const string &name, const string &joke) : User(name), joke(joke) {}

LabEmployee::LabEmployee(const string &name, const string &lab) : User(name), lab(lab) {}

LabEmployee::LabEmployee(const string &name, accesslevel level, const string &lab) : User(name, level), lab(lab) {}

Admin::Admin(const string &name, int num) : User(name), num(num) {}

Admin::Admin(const string &name, accesslevel level, int num) : User(name, level), num(num) {}

void Admin::giveaccess(User *user, Room &room) {
    room.dostup[user] = true;

}


void Director::awards(User *) {

}

Director::Director(const string &name, int employees) : User(name), employees(employees) {}

Director::Director(const string &name, accesslevel level, int employees) : User(name, level), employees(employees) {}

Guest::Guest(const string &name, int code) : User(name), code(code) {}

Guest::Guest(const string &name, accesslevel level, int code) : User(name, level), code(code) {}
