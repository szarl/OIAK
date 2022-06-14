#include <iostream>
#include <stdlib.h>
#include "operations.h"

using namespace std;


void displayMenu(int *userCase) {
  cout << "Choose operation" << endl;
  cout << "1. + (sum): " << endl;
  cout << "2. - (minus): " << endl;
  cout << "3. * (mult): " << endl;
  cout << "4. / (div) " << endl;
  cout << "5. ^ (pow)" << endl;
  cout << "6. ^(1/2) (sqrt)" << endl;
  cout << "7. % (mod)" << endl;
  cout << "8. Show history" << endl;
  cout << "9. exit" << endl;
  cin >> *userCase;

  return;
}

// default return counted value
int count(int *userCase, int &num1, int &num2) {
    switch(*userCase) {
        case 1:
            cout << "Sum: " << sum(num1, num2) <<endl;
            break;
        case 2:
            cout << "Substraction: " << substract(num1, num2) << endl;
            break;
        case 3:
            cout << "Multiplication: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Division: " << division(num1, num2) << endl;
            break;
        case 5:
            cout << "Power: " << power(num1, num2) << endl;
            break;
        case 6:
            cout << "Square root: " << endl;
            break;
        case 7:
            cout << "Modulo: " << modulo(num1, num2) << endl;
            break;
        case 8:
            cout << "Print history " << endl;
            break;
        case 9:
        // System
            cout << "Exit " << endl;
            exit(0);
            break;

      default:
          // If the operator is other than +, -, * or /, error message is shown
          cout << "There value doesn't exist !!!" << endl  << endl;
          break;
  }

return 0;
}

// test method
int main() {
  cout << "Welcome in assembly calculator!!!" << endl;
  cout << "Project is made by Karol Rutkowski 259197 && Konrad Jaklewicz 259163" << endl << endl << endl;
  int userCaseValue;
  int *userCase = &userCaseValue;
  int number1, number2;
  while (true) {
      cout << "Enter your first number: ";
      cin >> number1;
      cout << "Enter your second number: ";
      cin >> number2;
      cout << endl;
      displayMenu(userCase);
      count(userCase, number1, number2);
  }
  
  return 0;
}