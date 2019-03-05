#include <iostream>

using namespace std;

void canvi_base(int n, int b) {
    if (n < b) cout << n;
    else {
        canvi_base(n/b,b);
	cout << n%b;
    }
}

void canvi_hexa(int n) {
    if (n < 10) cout << n;
    else if (n == 10) cout << 'A';
    else if (n == 11) cout << 'B';
    else if (n == 12) cout << 'C';
    else if (n == 13) cout << 'D';
    else if (n == 14) cout << 'E';
    else if (n == 15) cout << 'F';
    
    else {
        canvi_hexa(n/16);
	if (n%16 < 10) cout << n%16;
            else if (n%16 == 10) cout << 'A';
            else if (n%16 == 11) cout << 'B';
            else if (n%16 == 12) cout << 'C';
            else if (n%16 == 13) cout << 'D';
            else if (n%16 == 14) cout << 'E';
            else if (n%16 == 15) cout << 'F';
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
	canvi_base(n,2);
	cout << ", ";
	canvi_base(n,8);
	cout << ", ";
	canvi_hexa(n);
	cout << endl;
    }
}
