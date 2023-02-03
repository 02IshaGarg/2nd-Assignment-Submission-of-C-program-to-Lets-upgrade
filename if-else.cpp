#include <iostream>
using namespace std;
int main() {
  int number;
  cout << "Enter an integer: ";
  cin >> number;
  if (number % 3 == 0 and number % 5 == 0) {
    cout << "Good Number" << endl;
  } 
  else if (number % 3 == 0 and number % 5 != 0) {
    cout << "Bad Number" << endl;
  } 
  else if (number % 5 == 0 and number % 3 != 0) {
    cout << "Poor Number"<< endl;
  } 
  else {
    cout << "-1" << endl;
  }
  return 0;
}