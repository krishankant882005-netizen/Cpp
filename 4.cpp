// Nested if statements
#include <iostream>
using namespace std;
int main() {
 int age;
 cout << "Enter your age: ";
 cin >> age;
 if(age >= 18) {
    cout << "You can Vote" << endl;
    if (age >= 25) {
        cout << "As well as eligible to stand for election." <<endl;
    } else {
        cout << "But you are not eligible to stand for election." << endl;
    }
}
    else {
        cout << "You are not eligible  to vote" <<  endl << "And you are not eligible to stand for election." << endl;
    }
 
 return 0;
}