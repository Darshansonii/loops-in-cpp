//Name-Darshan Soni
//PRN-24070123034
//Exp6

//Triangle pattern

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << "* ";
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