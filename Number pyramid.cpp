//Name-Darshan Soni
//PRN-24070123034
//Exp6

//Number pyramid pattern

#include <iostream>
using namespace std;

int main() {
    int count = 1;
    for (int i = 1; i <= 4; i++) {
        for (int space = 1; space <= 4 - i; space++)
            cout << "  ";
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

/*
Output
      1 
    2 3 
  4 5 6 
7 8 9 10 
*/
