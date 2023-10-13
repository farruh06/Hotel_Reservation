#include <iostream>
#include <fstream>
#include <string>


using namespace std;

class UserInfo {
public:
    void auentification() {

        cout << " Enter New Name :  ";
        string name;
        cin >> name;
        cout << " Enter New Password :  ";
        int password;
        cin >> password;

        ofstream PersonalInfo("userinfo.txt");
        PersonalInfo << name << endl << password;
        PersonalInfo.close();
    }

};

void Admin(){
    int rooms[4][4] = {
            {101, 102, 103, 104},
            {201, 202, 203, 204},
            {301, 302, 303, 304},
            {401, 402, 403, 404}
    };
    ofstream myRooms("")
}

void User(){
    cout << "                   Welcome User! \n\n\n";
    cout << "   We wanted to know you better =)\n";
    cout << "   Please authorize to our Hotel\n";
    cout << " 1)  Sign In\n";
    cout << " 2)  Sign Up\n";
    int b;
    cin >> b;
    if (b == 2){
        system("cls");
        cout << "  Please fill in details : \n";
        UserInfo myInfo;
        myInfo.auentification();
        system("cls");
        cout << "  Information about you will be saved. \n";
        cout << "  Now, please select a room.\n";
        int rooms[4][4];
       Admin();
        cout << "  Which floor do you want your room be on? \n";
        cout << " Please type 0 for 1st floor, 1 for 2nd floor...:  ";
        int floor;
        cin >> floor;
        cout << "  Which room do you want to take? \n ";
        cout << " Please type 0 for 1st room, 1 for 2nd room...:  ";
        int room;
        cin >> room;
        if (rooms[floor][room]){
            rooms[floor][room] = 0;
        }
        };

}







int main() {
    cout << "                Welcome to our Hotel!\n";
    cout << "\n\n\n\n\n\n";
    cout << "    Please choose your role:  \n";
    cout << "  1)  User\n";
    cout << "  2)  Admin\n";
    int a;
    cin >> a;
    if (a == 1){
        User();
    }
    else if (a == 2){
        Admin();
    }
    return 0;
}
