#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    
     if (c >= 'a' and c <= 'z') {
        c = 'A' - 'a' + c;
 }
      else if (c >= 'A' and c <= 'Z') {
	c = 'a' - 'A' + c;
      }
      cout << c << endl;
}

