#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//Llegeix un enter x i retorna true si és primer, i false altrament
bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x%i == 0) return false;  
    }
    return true;
}

//Llegeix una seq. de nombres reals i els gaurda a v
void read(vector<int>& v) {
     int n = v.size();
     for (int i = 0; i < n; ++i) cin >> v[i];
}

int main() {
    int n;
    while (cin >> n) {
    vector<int> V(n);
    read(V);
    int sum;
    bool found = false;
    if (n == 1) {
       if (is_prime(V[0])) found = true; 
    }
    else {
    for (int i = 0; i < n - 1; ++i) {
        sum = V[i] + V[i+1];
	if (is_prime(sum)) found = true;
      }
    }
    if (found) cout << "si" << endl;
    else cout << "no" << endl;
  }
}
