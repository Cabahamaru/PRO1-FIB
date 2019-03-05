#include <iostream>

using namespace std;

int nombre_digits(int n) {
    int count = 0;
    while (n > 9) {
        n = n/10;
	count = count + 1;
    }
    return count + 1;
}

int main() {
    int n;
    cin >> n;
    cout << nombre_digits(n) << endl;
}
