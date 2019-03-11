/**
 * This is a "hello world" program for the C++ course.
 */

#include <iostream>
using namespace std;
void leak(){
char* p = new char[30];
}

int main() {
    string name; 
    cout << "What is your name? ";
    leak();
    cin >> name;
    cout << endl << "Hello " << name << "!" << endl;
    cout << (1 << 5) << endl;
    return 0;
}
