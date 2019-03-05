#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x%i == 0) return false;  
    }
    return true;
}

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
	if (is_prime(x)) cout << x << " es primer" << endl;
	else cout << x << " no es primer" << endl;
    }
}
