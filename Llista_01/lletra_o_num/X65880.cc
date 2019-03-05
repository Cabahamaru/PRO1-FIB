#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'a' and c <= 'z') cout << "Lletra minuscula" << endl;
    else if (c >= 'A' and c <= 'Z') cout << "Lletra majuscula" << endl;
    else cout << "Numero" << endl;
}
