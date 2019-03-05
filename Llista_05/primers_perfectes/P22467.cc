#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int x) {
     if (x <= 1) return false;
     for (int i = 2; i <= sqrt(x); ++i) {
        if (x%i == 0) return false;
     }
     return true;
}

int suma_digits(int x) {
    if (x < 10) return x;
    return x%10 + suma_digits(x/10);
}

bool es_primer_perfecte(int n) {
     if (!is_prime(n)) return false;
     if (n < 10) return is_prime(n);
     return es_primer_perfecte(suma_digits(n));
}

int main() {
   int x;
   cin >> x; 
   cout << es_primer_perfecte(x) << endl;
}
