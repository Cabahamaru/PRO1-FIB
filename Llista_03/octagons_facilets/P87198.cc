#include <iostream>

using namespace std;

int main() {
   int n;
   int ce = n - 1;
   int cx = n;
   
   while (cin >> n) {
      for (int i = 0; i < n; ++i) {
	  for (int e = ce; e != 0; --e) cout << " ";
	  for (int x = cx; x != 0; --x) cout << "X";
	cout << endl;
	cx = cx + 2;
	ce = ce - 1;
      }
   }
   
   
}
