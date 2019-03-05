#include <iostream>
#include <vector>

using namespace std;

void read(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cin >> v[i]; 
    }
}

int posicio(double x, const vector<double>& v, int esq, int dre) {
     if (esq > dre) return -1;
     int pos = (esq + dre)/2; //posiciè´¸ central de v[esq..dre]
     if (x < v[pos]) return posicio(x,v,esq,pos - 1);
     if (x > v[pos]) return posicio(x,v,pos + 1, dre);
     return pos;
}

int main() {
    int esq, dre, pos, n;
    double x;
    cin >> n >> x;
    vector<double> v(n);
    read(v);
    esq = 0;
    dre = v.size() - 1;
    pos = posicio(x,v,esq,dre);
    cout << pos << endl;
}

