/* Using while Loop we will understand the concept of 
   Continue and break */
#include <iostream>
using namespace std;
int main() {
    
    for(int n = 0; n <= 10; n++) {
if(n==6){
    break;      /* here we use break means if n == 6 then we will exit from the loop after 5 
                    so basiclly break is use when we want to exit from the loop*/
}
cout << n << endl; 
    }

  // For continue

    for(int i = 0; i <= 10; i++) {
        if(i==6){
          continue;     /* here we use continue if i == 6 then it will skip i == 5 and continue the loop 
                           but not exit from the loop bascially continue is use when we want to skip any iteration */
        }
        cout << i << endl;
    }
    return 0;
}