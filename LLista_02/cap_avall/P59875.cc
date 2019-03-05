#include <iostream>

using namespace std;

int main() {
    int x, y, max, min;
    cin >> x >> y;
    
    if (x >= y) {
      max = x;
      min = y;
    }
    
    else {
      min = x;
      max = y;
    }
    
    while (max > min) {
         cout << max << endl;
	 max = max - 1;
    }
    cout << min << endl;
}
