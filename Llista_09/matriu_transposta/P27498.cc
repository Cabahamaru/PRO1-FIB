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

void transposa(Matriu& m) {
     int n = m.size();
     Matriu transpuesta(n,vector<int> (n));
     for (int i = 0; i < n; ++i) {
         for (int j = 0; j < n; ++j) {
	     transpuesta[j][i] = m[i][j]; 
	 }
     }
     m = transpuesta;
}

int main() {
    int n;
    cin >> n;
    Matriu M(n,vector<int> (n));
    read_matrix(M);
    transposa(M);
    cout << endl;
    write_matrix(M);
}