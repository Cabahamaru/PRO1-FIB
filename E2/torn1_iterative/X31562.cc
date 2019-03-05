#include <iostream>

using namespace std;

int my_function(int n) {
    int aux = 0;
    for (int i = 1; i < n; ++i) {
      aux = aux + i*(i+1);   
    }
    return aux;
}

int main() {
    int n;
    while (cin >> n) {
        cout << my_function(n) << endl;
  }
} 

