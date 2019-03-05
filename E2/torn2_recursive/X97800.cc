#include <iostream>

using namespace std;

int my_function(int n) {
    if (n == 1) return 1;
    return n + my_function(n-2);
}

int main() {
    int n;
    while (cin >> n) {
        cout << my_function(n) << endl; 
    }
}