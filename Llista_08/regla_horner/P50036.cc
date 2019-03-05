#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

//Llegeix una seq. de nombres reals i els gaurda a v
void read(vector<int>& v) {
     int n = v.size();
     for (int i = 0; i < n; ++i) cin >> v[i];
}

int avalua(const vector<int>& p, int x) {
    int n = p.size();
    int horner = 0;
    for (int i = 0; i < n; ++i) {
        horner = horner + p[i]*pow(x,i);
    }
    return horner;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    read(p);
    cout << avalua(p,x) << endl;
}
