#include <iostream>

using namespace std;

int eval() {
    char c;
    cin >> c;
    
    if (c == '+') return eval() + eval();
    if (c == '-') return eval() - eval();
    if (c == '*') return eval() * eval();
    return c - '0';
}

int main() {
    cout << eval() << endl;
}