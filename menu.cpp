# include <iostream>
#include <stdlib.h>
using namespace std;

void displayMenu(int *userCase) {
  cout << "Choose operation" << endl;
  cout << "1. + (sum): " << endl;
  cout << "2. - (minus): " << endl;
  cout << "3. * (mult): " << endl;
  cout << "4. / (div) " << endl;
  cout << "5. Show history" << endl;
  cout << "6. exit" << endl;
  cin >> *userCase;

  return;
}

// default return counted value
int count(int *userCase, int &num1, int &num2) {
  cout << *userCase;
  switch(*userCase) {
    case 1:
      cout << "Suma: " << endl;
      break;
    case 2:
      cout << "Odejmowanie " << endl;
      break;
    case 3:
      cout << "Mnozenie " << endl;
      break;
    case 4:
      cout << "Dzielenie " << endl;
      break;
    case 5:
      cout << "Print history " << endl;
      break;
    case 6:
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
  cout << "Project is made by Karol Rutkowski 259197 && ..." << endl << endl << endl;
  int userCaseValue;
  int *userCase = &userCaseValue;
  int number1, number2;
  while (true) {
    displayMenu(userCase);
    count(userCase, number1, number2);
  }
  
  return 0;
}