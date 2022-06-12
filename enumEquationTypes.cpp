#include <iostream>
#include <string.h>

enum EnumEquationTypes {
    ADD,
    MINUS,
    MULT,
    DIV,
};

string enumToString(EnumEquationTypes type) {
   switch(type) {
      case ADD:
         return "Dodawanie";
      case MINUS:
         return "Odejmowanie";
      case MULT:
         return "Mnozenie";
      case DIV:
         return "Dzielenie";
      default:
         return "Niepoprawna wartosc";
   }
}