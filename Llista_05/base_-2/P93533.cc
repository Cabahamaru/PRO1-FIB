#include <iostream>

using namespace std;

void canvi_base(int n) {
    if (n == 0 or n == 1) cout << n; 
   else {
      canvi_base(n/-2);
      cout << n%-2; 
   }
} 

int main() {
    int n;
    while (cin >> n) {
        cout << n << ": ";
	canvi_base(n);
        cout << endl;
    }
}
