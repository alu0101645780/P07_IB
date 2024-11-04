/* Escriba un programa decimal-to-binary.cc que convierta números de decimal a binario. No utilice los tipos std::string, std::vector o std::array */

#include <iostream>
using namespace std;

void DecimalToBinary(int decimal) {
    if (decimal == 0) {
        cout << 0;
        return;
    }

    int binary = 0;
    int base = 1;


    while (decimal > 0) {
        int bit = decimal % 2;
        binary += bit * base;
        decimal /= 2;
        base *= 10;
    }

    cout << binary;
}

int main() {
    int decimal;
    cout << "Ingrese un número decimal: ";
    cin >> decimal;

    DecimalToBinary(decimal);

    return 0;
}

