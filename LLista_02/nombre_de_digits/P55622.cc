#include <iostream>

using namespace std;

int main() {
    int n, count, nombre;
    cin >> n;
    count = 1;
    nombre = n;
    
    while (n > 10) {
         n = n/10;
	 count = count + 1;
    }
    
    cout << "The number of digits of " << nombre << " is " << count << "." << endl;
}
