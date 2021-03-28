//
// Created by Elizaveta on 02.03.2021.
//

#ifndef UNTITLED5_USER_H
#define UNTITLED5_USER_H
#include <string>
#include "accesslevel.h"
#include "Room.h"

using namespace std;

class User {
private:
    string name;
    accesslevel level;

public:
    accesslevel getLevel() const;
    User(const string &name);
    User(const string &name, accesslevel level);
    virtual ~User();
};

class Student : public User{
private:
    string group;
public:
    Student(const string &name, const string &group);
    Student(const string &name, accesslevel level, const string &group);
};

class Professor : public User{
private:
    string joke;
public:
    Professor(const string &name, accesslevel level, const string &joke);
    Professor(const string &name, const string &joke);
};


class LabEmployee : public User{
private:
    string lab;
public:
    LabEmployee(const string &name, const string &lab);
    LabEmployee(const string &name, accesslevel level, const string &lab);
};


class Director : public User{
private:
    int employees;
public:
    void awards(User* user);
    Director(const string &name, int employees);
    Director(const string &name, accesslevel level, int employees);
};

class Admin : public User{
private:
    int num; //num - number of computers
public:
    Admin(const string &name, int num);
    Admin(const string &name, accesslevel level, int num);
    void giveaccess(User *user, Room& room);
};


class Guest : public User {
private:
    int code;
public:
    Guest(const string &name, int code);
    Guest(const string &name, accesslevel level, int code);
};

#endif //UNTITLED5_USER_H
