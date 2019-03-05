#include <iostream>

using namespace std;

int main() {
    int n;
    int suma = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
         suma = suma + i*i;
    }
    cout << suma << endl;
}
