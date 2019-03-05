#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x, y;
    x = a;
    y = b;
    while (a != b) {
        if (a > b) a = a - b;
	else b = b - a;
    }
    
    cout << "El mcd de " << x << " i " << y << " es " << a << "." << endl;
}
