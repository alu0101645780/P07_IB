/* alu0101645780
    4/11/2024
    Write a program that reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x). */

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

double CalcularPolinomio(double x, const std::vector<double>& coeficientes) {
    double resultado = 0;
    for (size_t i = 0; i < coeficientes.size(); ++i) {
        resultado += coeficientes[i] * std::pow(x, i);
    }
    return resultado;
}

int main() {
    double x;
    std::cin >> x;

    std::vector<double> coeficientes;
    double coef;

    while (std::cin >> coef) {
        coeficientes.push_back(coef);
    }

    double resultado = CalcularPolinomio(x, coeficientes);

    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;

    return 0;
}

