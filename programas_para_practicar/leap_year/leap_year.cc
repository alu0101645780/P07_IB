/* Escriba un programa leap-year.cc que indique si un año es o no bisiesto Un año bisiesto tiene 366 días. Después de la reforma gregoriana, los años bisiestos son aquellos múltiplos de cuatro que no terminan con dos ceros, y también los años que terminan con dos ceros tales que, después de eliminar estos dos ceros, son divisibles por cuatro. Así, 1800 y 1900, a pesar de ser múltiplos de cuatro, no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto. */

#include <iostream>
using namespace std;

void LeapYear(int anyo) {

    if (anyo % 4 == 0 &&  (anyo % 10 != 0 && anyo % 100 == 0)) {
        cout << anyo << "YES" << endl;
        } else if (anyo % 400 == 0) {
            cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
                }

}

int main(){

    int anyo;
    cin >> anyo;

    LeapYear(anyo);

    return 0;
}
