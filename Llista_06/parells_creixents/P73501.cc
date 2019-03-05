#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
	int count = 0;
        while (x != 0) {
	     int aux = x;
	     cin >> x;
	     if (x > aux) ++count; 
	}
	cout << count << endl;
    }
}
