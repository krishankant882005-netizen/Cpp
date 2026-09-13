/* use of cin(input) and cout(output) using (if and else).  
Print adult if age >= 18 and print Not Adult if age < 18*/
 #include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >=18) {
        cout << "Adult" << endl;
            } else {
                cout <<"Not Adult" << endl;
            }
            return 0;
    }