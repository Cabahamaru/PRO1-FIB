#include <iostream>
#include <vector>

using namespace std;

//Llegeix una seq. de nombres reals i els gaurda a v
void read(vector<double>& v) {
     int n = v.size();
     for (int i = 0; i < n; ++i) cin >> v[i];
}

//Pre:dos vectors de nombres reals de la mateixa mida
//Post: retorna el producte escalar d'aquests dos vectors
double producte_escalar(const vector<double>& u, const vector<double>& v) {
       int n = v.size();
       double prod = 0;
       for (int i = 0; i < n; ++i) {
	   prod = prod + v[i]*u[i];
       }
       return prod;
}

int main() {
    int n;
    cin >> n;
    vector<double> u(n), v(n);
    read(u);
    read(v);
    cout << producte_escalar(u,v) << endl;
}
