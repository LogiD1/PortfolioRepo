#include <iostream>

using namespace std;

int factorial (int n) {
   if (n == 1) {
     return 1;
   } 
   else {
     return (n * factorial(n - 1));
   }
}


int main() {
  int number;
  while (number != 0) {
    cout << "Please enter a number: " << endl;
    cin >> number;
    int num = factorial(number);
    cout << num << endl;
    }
}
