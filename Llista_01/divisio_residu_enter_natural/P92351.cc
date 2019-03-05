#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a%b >= 0) cout << a/b << " " << a%b << endl;
    else cout << a / b - 1 << " " << a % b + b << endl;
}
