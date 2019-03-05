#include <iostream>
#include <vector>

using namespace std;

// lee y guarda en un vector una secuencia
void read(vector<int>& v) {
   int n = v.size();
   for (int i = 0; i < n; ++i) cin >> v[i];  
}

void write(const vector<int>& v) {
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
    int n; // tamaño de la secuencia
    while (cin >> n) {
        vector<int> v(n);
	read(v);
        bool first = true;
	// imprimimos los elementos 0 y n-1, 1y n-2, ....
        for (int i = 0; i < n/2; ++i)  {
	    if (first) first = false;
	    else cout << ' ';
            cout << v[i] << ' ' << v[n-1-i];
        }
        if (n%2 != 0) cout << ' ' << v[(n/2)];
	cout << endl;     
    }
}