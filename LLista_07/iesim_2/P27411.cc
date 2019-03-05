
#include <iostream>

using namespace std;

int main() {
    int n, x;
    int pos = 0;
    cin >> n;
    if (n <= 0) cout << "Posicio incorrecta." << endl;
    else {
      int aux;
       while (cin >> x) {
	   ++pos;
	   if (n == pos) aux = x;
       }
    if (n > pos) cout << "Posicio incorrecta." << endl;
    else cout << "A la posicio " << pos << " hi ha un " << aux << "." << endl;
    }
}
