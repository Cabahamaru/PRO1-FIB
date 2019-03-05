#include <iostream>

using namespace std;

int my_function(int n) {
    int aux = 0;
    for (int i = 1; i <= n; i = i + 2) {
        aux = aux + i; 
    }
    return aux;
}

int main() {
    int n;
    while (cin >> n) {
        cout << my_function(n) << endl; 
    }
}
