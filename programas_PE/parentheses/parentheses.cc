/* alu0101645780
    4/11/2024
    Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
*/

#include <iostream>
#include <stack>
using namespace std;

bool CorrectamenteCerrados(const string& str) {
    stack<char> par;
    
    for (char ch : str) {
        if (ch == '(') {
            par.push(ch);
        } else if (ch == ')') {
            if (par.empty()) {
                return false;
            }
            par.pop();
        }
    }
    
    return par.empty();
}

int main() {
    string parentesis;
    cin >> parentesis;
    
    if (CorrectamenteCerrados(parentesis)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}

