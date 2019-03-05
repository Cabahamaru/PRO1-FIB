#include <iostream>
using namespace std;

int main() {
    int x, y, z, min;
    cin >> x >> y >> z;
    if (x > y) min = y;
    else min = x;
    if (min > z) min = z;  
    cout << min << endl;
}
