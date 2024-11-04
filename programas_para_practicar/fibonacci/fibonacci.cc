/* Desarrolle un programa que imprima los N primeros términos de la Serie de Fibonacci. Los primeros términos de la serie son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...*/

#include <iostream>
using namespace std;

void Fibonacci(int n) {
    int a = 0, b = 1, siguiente;

    if (n <= 0) {
        cout << "El valor de N debe ser mayor que 0." << endl;
        return;
    }

    if (n >= 1) {
        cout << a << " ";
    }
    if (n >= 2) {
        cout << b << " ";
    }

    for (int i = 3; i <= n; i++) {
        siguiente = a + b;
        cout << siguiente << " ";
        a = b;
        b = siguiente;
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Fibonacci(n);

    return 0;
}

