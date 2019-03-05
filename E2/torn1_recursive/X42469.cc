#include <iostream>

using namespace std;

int my_function(int n) {
  if (n == 1) return 0;
  return (n-1)*n + my_function(n-1);
}

int main() {
    int n;
    while (cin >> n) {
        cout << my_function(n) << endl; 
    }
}
