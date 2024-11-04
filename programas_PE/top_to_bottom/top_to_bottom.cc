/* alu0101645780
    4/11/2024
    Write a program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.
*/

#include <iostream>

void ImprimirOrdenDecreciente(int a, int b) {
    if (a < b) std::swap(a, b); 
    for (int i = a; i >= b; --i) {
        std::cout << i << "\n";
    }   
}

int main() {
    int x, y;
    std::cin >> x >> y;
    ImprimirOrdenDecreciente(x, y); 
    return 0;
}
