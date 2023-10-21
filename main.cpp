#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <string>

using namespace std;
class User{
private:
    string line;
    string name;
    string file_extension = ".txt";
    string password;



public:
    void userInfo() {
        cout << " Enter your name :  ";
        cin >> name;
        cout << " Enter your password :  ";
        cin >> password;
        ofstream save(name + file_extension, ios :: in | ios :: trunc);
        save << password << endl;
        save.close();

    }
    void clientInfo(){
        Name:
        cout << " Enter your name :  ";
        cin >> name;
        Password:
        cout << " Enter your password :  ";
        cin >> password;
       try {
            ifstream collect(name + file_extension, ios :: out );
                getline(collect, line);
                if (!collect){
                    cerr << "  Your name is not found. \n";
                    goto Name;
                }


                else if (line == password ){
                    cout << " Welcome back " << name << "!\n";
                }
                else {
                    cout << " Incorrect password. Try again\n";
                }
                while (line != password){
                    goto Password;
                }
            collect.close();
      }
        catch(...){

            cout << "Error! File not found\n";
        }
    }
};
int main(){
    int a;
    User myobj;

    cout << "            Please log in to continue \n\n\n";
    cout << " 1) Sign Up\n";
    cout << " 2) Sign In\n";

    cout << " -   ";
    cin >> a;

    if (a == 1){

        myobj.userInfo();

    }
    else if (a == 2){
        myobj.clientInfo();
    }
    return 0;
}