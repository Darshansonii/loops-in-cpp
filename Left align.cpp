//Name-Darshan Soni
//PRN-24070123034
//Exp6

//Triangle pattern

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


/*
Output
* 
* * 
* * * 
* * * * 
* * * * *
*/