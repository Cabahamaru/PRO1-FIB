#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.setf(ios::fixed); 
    cout.precision(6);
    double x;
    while (cin >> x) {
        int q = x*x;
        cout << q << " " << sqrt(x) << endl; 
    }
}
