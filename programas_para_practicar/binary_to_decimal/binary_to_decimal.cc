/* Escriba un programa binary-to-decimal.cc que convierta números binarios en decimal. No utilice los tipos std::string, std::vector o std::array. Si la entrada no fuera un número binario, el programa debe imprimir en pantalla un mensaje de error y finalizar la ejecución.*/

#include <iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int binario) {

    int decimal{0}, posicion{0}, digito{0};

        while (binario != 0) {
            digito = binario %10;
                if (digito != 0 && digito != 1) {
                    cout << "Error: La entrada no es un número binario." << endl;
                    exit(1);
                } else {
                    decimal = decimal + digito * pow(2, posicion);
                }
            binario /= 10; 
            posicion++;
        }
    return decimal;
}

int main() {

    int binario;
    cin >> binario;

    cout << BinaryToDecimal(binario) << endl;

    return 0;
}
