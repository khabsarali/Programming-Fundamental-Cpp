#include <iostream>
using namespace std;

int main()
{
    string Username,Password;

    cout << "Enter Username: " ;
    cin >> Username;
    cout << "Enter Password: " ;
    cin >> Password;

    if (Username == "admin" && Password == "12345") {
        cout << "Access Granted." << endl;
    }
    else if (Username == "admin"&& Password != "12345") {
        cout << "Access Denied" << endl;
    }
    else {
        cout << "User not Found" << endl;
    }

    return 0;
}

