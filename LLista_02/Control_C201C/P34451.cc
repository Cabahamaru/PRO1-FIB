#include <iostream>

using namespace std;

int main() {
   int n, s;
   int count = 0;
   cin >> n;
   
   while (cin >> s) {
       if (s%n == 0) ++count;
   }
   cout << count << endl;
}
