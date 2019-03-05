#include <iostream>

using namespace std;

int main() {
    int x;
    int pos = 1;
    cin >> x;
    while (x%2 != 0) {
         cin >> x;
	 ++pos;
    }
    cout << pos << endl;
}
