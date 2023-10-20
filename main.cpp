#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <string>

using namespace std;
class User{
private:
    void admin() {


    }
public:
    void userInfo() {
        cout << " Enter your name :  ";
        string name;
        cin >> name;
        cout << " Enter your password :  ";
        int password;
        cin >> password;
        ofstream save("userinfo.txt", ios :: in);
        save << name << endl << password << endl;
        save.close();
    }
};
int main(){
    cout << "            Please log in to continue \n\n\n";
    cout << " 1) Sign Up\n";
    cout << " 2) Sign In\n";
    int a;
    cout << " -   ";
    cin >> a;
    if (a == 1){
        User myobj;
        myobj.userInfo();
    }
    else if (a == 2){

    }
    return 0;
}