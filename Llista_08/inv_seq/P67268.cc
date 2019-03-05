#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Vi;

//Llegeix una seqüencia d'enters i els guarda al vector v.
void read(Vi& v) {
   int n = v.size();
   for (int i = 0; i < n; ++i) cin >> v[i];
}

//Escriu per pantalla el vector v
void write(Vi& v) {
  bool first = true;                  
  int n = v.size();
  for (int i = 0; i < n; ++i) {
     if (first) first = false; 
     else cout << " "; 
     cout << v[i];
  }
  cout << endl;
}

int main() {
    int n;
    while (cin >> n) {
    Vi v(n);
    read(v);
    for (int i = 0; i < n - 1; ++i) {
        int aux = v[i];
        v[i] = v[n-1];
	v[n-1] = aux;
	--n;
    }
    write(v);
  }
}

