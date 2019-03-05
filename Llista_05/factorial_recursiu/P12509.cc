#include <iostream>

using namespace std;

int factorial(int n) {
    if (n < 2) return 1;
    cout << "antes " << n << endl;
    int aux = n - 1;
    cout << "despues " << aux << endl;
    return n*factorial(aux);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}
