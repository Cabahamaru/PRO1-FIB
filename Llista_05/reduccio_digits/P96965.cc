#include <iostream>

using namespace std;

int suma_digits(int x) {
    if (x < 10) return x;
    return x%10 + suma_digits(x/10);
}

int reduccio_digits(int x) {
    if (x < 10) return x;
    return reduccio_digits(suma_digits(x));
}

int main() {
   int x;
   cin >> x;
   cout << reduccio_digits(x) << endl;
}