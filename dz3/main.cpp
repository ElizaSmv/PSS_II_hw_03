#include <iostream>
#include "User.h"
#include "Room.h"
#include <vector>
#include "accesslevel.h"

using namespace std;

bool check(User* user, Room& room){
    if (room.dostup.count(user)) return room.dostup[user];
    return user->getLevel()>=room.getAccess();
}

void emerg(int i, bool emergency, vector<Room> classes){
    if (emergency = true) {
        for (int j=0;j<i;j++){
            classes[i] = NO_LEVEL;
        }
    }

}

int main() {
    vector<Room> classes = {
            Room(CLASSROOM, "301", YELLOW),
            Room(DIRECTOR_ROOM, "idk",RED),
            Room(LECTURE_ROOM, "108", BLUE),
            Room(CONFERENCE_ROOM, "1.2", GREEN)
    };

    vector<User*> staff = {
            new Guest("Anna Gli", BLUE, 213),
            new Director("Kirill Semenikhin", RED, 10),
            new Admin ("Nikita", RED, 3),
            new LabEmployee ("Oleg Bulichev", "robotics"),
            new Professor ("Ivan Konyuknov", YELLOW,"Hello it's Dr Konyukhov"),
            new Professor ("Maria Naumcheva", YELLOW,"It's not ok what you did"),
            new Student ("Daniil Vaino", GREEN, "BS20-04")
    };
    (dynamic_cast<Admin*>(staff[1])) ->giveaccess(staff[3], classes[1]);
    cout << check(staff[3], classes[1]) << endl;

    int i = classes.size();

    //return 0;
    bool emergency = false;
    cin >> emergency;

    emerg(i,emergency,classes);

    cout << check(staff[0], classes[1]) << endl;



    }




