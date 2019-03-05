#include <iostream>

using namespace std;

int main() {
   int b, n;
   cin >> b;
   
   while (cin >> n) {
      int c = n;
      int suma = 0;
       while (n > 0) {
	   suma = suma + n%b;
	   n = n/b;
       }
       cout << c << ": " <<  suma << endl;
   }
}
