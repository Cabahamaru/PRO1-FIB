#include <iostream>

using namespace std;

int main() {
   int b, n, count;
   count = 1;
   
   while (cin >> b >> n) {
       while (n >= b) {
	  count = count + 1;
	  n = n/b;
       }
       cout << count << endl;
       count = 1;
   }
}
