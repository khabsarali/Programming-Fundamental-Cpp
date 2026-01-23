#include<iostream>
using namespace std;
int main()
{
	string username,password,role;
	cout<<"Enter Username: ";
	cin>>username;
	cout<<"Enter Password: ";
	cin>>password;
	
    if (username == "admin" && password == "password123") {
        cout << "\nAuthentication Successful!" << endl;

        // Enter role after successful login
        cout << "Enter Role (Admin / Guest / Other): ";
        cin >> role;

        // Role Based Access
        if (role == "Admin" || role == "admin") {
            cout << "Full Access" << endl;
        }
        else if (role == "Guest" || role == "guest") {
            cout << "Limited Access" << endl;
        }
        else {
            cout << "No Access" << endl;
        }
    }
    else {
        cout << "\nAuthentication Failed. Access Denied." << endl;
    }
	
	return 0;
}
