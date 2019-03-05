#include <iostream>

using namespace std;

int main() {
   char c;
   int x, y;
   x = y = 0;
   while (cin >> c) {
       if (c == 'n') y = y - 1;
       else if (c == 's') y = y + 1;
       else if (c == 'e') x = x + 1;
       else if (c == 'o') x = x - 1;
   }
   
   cout << "(" << x << ", " << y << ")" << endl;
}
 

