#include <iostream>

using namespace std;
int main(void) {
  int d, c;
  cout << "Introduce la cantidad de dolares: \t", cin >> d;
  cout << "Introduce el tipo de cambio del dolar al dia de hoy(colones): \t", cin >> c;
  cout <<"Usted dispone de:\t"<< d*c <<"  colones\n";
  return 0;
}