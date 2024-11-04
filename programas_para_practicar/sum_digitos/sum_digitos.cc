/* Escriba un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión. */

#include<iostream>
using namespace std;

int main() {
  int num, sum = 0;
  cout << "Introduce un número natural: ";
  cin >> num;

    while (num > 0) {
      sum += num % 10;
      num /= 10;
    }

  cout << "La suma de los dígitos es: " << sum << endl;
  return 0;
}

