#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    double x, max, min;
    double sum = 0;
    cin >> n1;
    for (int i = 0; i < n1; ++i) {
        cin >> n2;
	cin >> x;
	max = min = sum = x;
	for (int j = 0; j < n2 - 1; ++j) {
	     cin >> x;
	     if (x >= max) max = x;
	     if (x <= min) min = x;
	     sum = sum + x;
	}
	cout.setf(ios::fixed);
        cout.precision(4);
	cout << min << " " << max << " " << sum/n2 << endl;  
    }
}


