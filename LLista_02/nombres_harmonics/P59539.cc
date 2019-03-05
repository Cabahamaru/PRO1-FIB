#include <iostream>

using namespace std;

int main() {
    double Hn = 0;
    double n, i;
    cin >> n;
    i = 1;
    
    while (i != n + 1) {
         Hn = 1/i + Hn;
	 i = i + 1;
    }
    
    cout.setf(ios::fixed);
    cout.precision(4); //precisión a 4 decimales

    cout << Hn << endl;
}
