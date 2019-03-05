#include <iostream>
using namespace std;

int main() {
    int x, h, m;
    h = m = 0;
    cin >> x;
    if (x >= 3600) {
      h = x/3600;
      x = x%3600;
    }
    if (x >= 60) {
      m = x/60;
      x = x%60;
    }
    cout << h << " " << m << " " << x << endl;
}
