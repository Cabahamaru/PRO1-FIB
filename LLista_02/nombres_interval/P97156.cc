#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a > b) cout << endl;
    else {
     while (a < b) {
          cout << a << ",";
	  a = a + 1;
     }
     cout << b << endl;
    }
}
