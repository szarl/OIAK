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
  cout << "8. ! (fact)" << endl;
  cout << "9. exit" << endl;
  cin >> *userCase;

  return;
}

// default return counted value
int count(int *userCase) {
    int number1, number2;
    switch(*userCase) {
        case 1:
            cout << "Enter your first number: ";
            cin >> number1;
            cout << "Enter your second number: ";
            cin >> number2;
            cout << endl;
            cout << "Sum: " << sum(number1, number2) <<endl;
            break;
        case 2:
            cout << "Enter your first number: ";
            cin >> number1;
            cout << "Enter your second number: ";
            cin >> number2;
            cout << endl;
            cout << "Substraction: " << substract(number1, number2) << endl;
            break;
        case 3:
            cout << "Enter your first number: ";
            cin >> number1;
            cout << "Enter your second number: ";
            cin >> number2;
            cout << endl;
            cout << "Multiplication: " << multiply(number1, number2) << endl;
            break;
        case 4:
            cout << "Enter your first number: ";
            cin >> number1;
            cout << "Enter your second number: ";
            cin >> number2;
            cout << endl;
            cout << "Division: " << division(number1, number2) << endl;
            break;
        case 5:
            cout << "Enter your first number: ";
            cin >> number1;
            cout << "Enter your second number: ";
            cin >> number2;
            cout << endl;
            cout << "Power: " << power(number1, number2) << endl;
            break;
        case 6:
            cout << "Square root: " << endl;
            break;
        case 7:
            cout << "Enter your first number: ";
            cin >> number1;
            cout << "Enter your second number: ";
            cin >> number2;
            cout << "Modulo: " << modulo(number1, number2) << endl;
            break;
        case 8:
            cout << "Enter your number: ";
            cin >> number1;
            cout << endl;
            cout << "Silnia: " << factorial(number1) << endl;
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
  while (true) {
      displayMenu(userCase);
      count(userCase);
  }
  
  return 0;
}