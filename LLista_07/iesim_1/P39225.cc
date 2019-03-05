#include <iostream>

using namespace std;

int main() {
    int n, x;
    int pos = 0;
    cin >> n;
    while (n != pos and x != -1) {
        cin >> x;
	++pos;
    }
    cout << "A la posicio " << pos << " hi ha un " << x << "." << endl;
}
