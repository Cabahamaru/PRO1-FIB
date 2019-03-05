#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x%i == 0) return false; 
    }
    return true;
}

int main() {
    int n;
    while (cin >> n) {
        cout << n;
        if (!is_prime(n)) cout << " no";
	cout << " es primer" << endl;
    }
}