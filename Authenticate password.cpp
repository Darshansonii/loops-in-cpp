//Name-Darshan Soni
//PRN-24070123034
//Exp6

//Authenticate password

#include <iostream>
#include <string>

using namespace std;

int main() {
    string password, attempt;
    cout << "Hello! Let's get started by setting up your password." << endl;
    cout << "Enter a new password: ";
    getline(cin, password);  // User sets their password
    cout << "\n Password has been set successfully!" << endl;
    while (true) {
        cout << "\nPlease enter your password to log in: ";
        getline(cin, attempt);
        if (attempt == password) {
            cout << "\nAccess granted! Welcome back!" << endl;
            break;
        } else {
            cout << "Incorrect password. Try again.";
        }
    }

    return 0;
}


/*
Output
Hello! Let's get started by setting up your password.
Enter a new password: srtgs33

 Password has been set successfully!

Please enter your password to log in: 2342
Incorrect password. Try again.
*/
