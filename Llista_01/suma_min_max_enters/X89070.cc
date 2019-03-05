#include <iostream>
using namespace std;

int main() {
    int x, y, z, min, max;
    cin >> x >> y >> z;
    if (x > y) min = y;
    else min = x;
    if (min > z) min = z;
    
    if (x > y) max = x;
    else max = y;
    if (z > max) max = z;
    
    
    cout << max + min << endl;
}
