#include <iostream>
#include <vector>

using namespace std;

void read(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cin >> v[i]; 
    }
}

int posicio_maxim(const vector<double>& v, int m) {
    int pos_max = 0;
    for (int i = 0; i <= m; ++i) {
         if (v[pos_max] < v[i]) pos_max = i;
    }
    return pos_max;
}

int main() {
    int m;
    cin >> m;
    vector<double> v(m);
    read(v);
    cout << posicio_maxim(v,m) << endl;
}
