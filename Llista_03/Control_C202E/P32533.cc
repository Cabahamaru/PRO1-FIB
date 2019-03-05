#include <iostream>

using namespace std;

int main() {
   int n;
   cin >> n;
   int aux = n;
   
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < aux - 1; ++j) {
	 cout << "+";
      }
      cout << "/";
      for (int k = 0; k < n - aux; ++k) {
	 cout << "*";
      }      
      
      cout << endl;
      aux = aux - 1;
   }
   
}
