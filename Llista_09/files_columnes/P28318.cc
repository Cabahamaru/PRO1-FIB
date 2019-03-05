#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector<vector<int> > Matriu;

void read_matrix(Matriu& m) {
    int nf = m.size();
    for (int i = 0; i < nf; ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
	    cin >> m[i][j]; 
	}
    }
}

void write_f(const Matriu& m, int fila) {
     int nc = m[fila-1].size();
     for (int j = 0; j < nc; ++j) {
         if (j > 0) cout << " ";
         cout << m[fila-1][j];
     }
     cout << endl;
}

void write_c(const Matriu& m, int col) {
     int nf = m.size();
     for (int i = 0; i < nf; ++i) {
         if (i > 0) cout << " ";
         cout << m[i][col-1]; 
     }
     cout << endl;
}

void write_element(const Matriu& m, int fila, int col) {
    cout << m[fila-1][col-1];
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    Matriu M(n,vector<int> (m));
    read_matrix(M);
    string s;
    while (cin >> s) {
        int x;
	if (s == "fila") {
	   cin >> x;
	   cout << "fila " << x << ": ";
	   write_f(M,x);
	}
	if (s == "columna") {
	   cin >> x;
	   cout << "columna " << x << ": ";
	   write_c(M,x);
	}
	if (s == "element") {
	   int aux;
	   cin >> x >> aux;
	   cout << "element " << x << " " << aux << ": ";
	   write_element(M,x,aux);
	}
    }
}
