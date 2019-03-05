#include <iostream>

using namespace std;

void descompon(int n, int& h, int& m, int& s) {
    h = m = s = 0;
    if (n >= 3600) {
       h = n/3600;
       n = n%3600;
    }
    if (n >= 60) {
       m = n/60;
       n = n%60;
    }
    s = n;
}

int main() {
    int n, h, m, s;
    h = m = s = 0;
    cin >> n;
    descompon(n,h,m,s);
    cout << h << " " << m << " " << s << endl;
}
