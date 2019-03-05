#include <iostream>

using namespace std;


int main() {
    char c;
    while (c != 'a' and c != '.') {
        cin >> c;
    }
    if (c == 'a') cout << "si" << endl;
    else cout << "no" << endl;
}
