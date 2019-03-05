#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matriu;

void read_matrix(Matriu& m) {
    int nf = m.size();
    int nc = m[0].size();
    for (int i = 0; i < nf; ++i) {
        for (int j = 0; j < nc; ++j) {
	    cin >> m[i][j]; 
	}
    }
}

void write_matrix(const Matriu& m) {
     int nf = m.size();
     int nc = m[0].size();
     for (int i = 0; i < nf; ++i) {
         for (int j = 0; j < nc; ++j) {
	     if (j > 0) cout << " ";
	     cout << m[i][j]; 
	}
	cout << endl;
    }
}

Matriu producte(const Matriu& a, const Matriu& b) {
       int n = a.size();
       Matriu c(n,vector<int> (n));
       for (int i = 0; i < n; ++i) {
           for (int j = 0; j < n; ++j) {
	       for (int k = 0; k < n; ++k) {
	           c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
	       }
           }
       }
       return  c;
}

int main() {
    int n;
    cin >> n;
    Matriu a(n,vector<int> (n));
    read_matrix(a);
    Matriu b(n,vector<int> (n));
    read_matrix(b);
    Matriu c(n,vector<int> (n));
    c = producte(a,b);
    cout << endl;
    write_matrix(c);
}