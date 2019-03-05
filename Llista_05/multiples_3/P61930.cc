#include <iostream>

using namespace std;

int suma_digits(int n) {
    if (n < 10) return n;
    return n%10 + suma_digits(n/10);
}

bool es_multiple_3(int n) {
    if (n%3 == 0) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;
    cout << es_multiple_3(suma_digits(n)) << endl;
}