#include <iostream>
#include <vector>

using namespace std;

void read(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cin >> v[i]; 
    }
}

void write(const vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << ' ';
        cout << v[i];
    }
}

void swap(double& a, double& b) {
    double c = a;
    a = b;
    b = c;
}

int posicio_maxim(const vector<double>& v, int m) {
    int pos_max = 0;
    for (int i = 0; i <= m; ++i) {
         if (v[pos_max] < v[i]) pos_max = i;
    }
    return pos_max;
}

void ordena_per_seleccio(vector<double>& v, int m) {
    if (m > 0) {
       int k = posicio_maxim(v,m);
       swap(v[k],v[m]);
       ordena_per_seleccio(v,m-1);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<double> v(n);
    read(v);
    ordena_per_seleccio(v,m);
    write(v);
    cout << endl;
}