// Using For Loop we will find sum of N numbers
#include <iostream>
using namespace std;
int main() {
 int n, sum = 0;
 cout << "Enter a number: " << endl;
 cin >> n;
 for(int i = 0; i <= n; i++) {
    sum += i;
 }
cout << "Sum of n numbers: " << sum << endl;


// Using For Loop we fill find Multiplication of x numbers

int num, product = 1;
cout <<"Enter a number: " << endl;
cin >> num;
for(int i = 1; i <= 5; i++) {
    product *= i;
}
cout << "Product of numbers: " << product << endl;
return 0;
}

