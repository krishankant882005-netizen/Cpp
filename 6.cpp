// Ternary operator
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter age: " << endl; 
    cin >> age;
    // IN NEXT LINE WE USE TERNARY OPERATOR INSTEAD OF IF ELSE.
    (age >= 18) ? cout << "Can Vote" : cout << "Cannot Vote";
   return 0;
}