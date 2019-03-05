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


bool es_simetrica(const Matriu& m) {
     int n = m.size();
     for (int i = 0; i < n; ++i) {
         for (int j = 0; j < n; ++j) {
	     if (m[i][j] != m[j][i]) return false; 
	 }
     }
     return true;
}

int main() {
    int n;
    cin >> n;
    Matriu M(n,vector<int> (n));
    read_matrix(M);
    if (es_simetrica(M)) cout << "es simetrica";
    else cout << "no es simetrica";
    cout << endl;
}
