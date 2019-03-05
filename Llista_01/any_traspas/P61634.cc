#include <iostream>

using namespace std;

int main() {
    int any; //entre 1800 i 9999
    cin >> any;
    
    if (any%100 == 0) {
     if ((any/100)%4 == 0) cout << "YES" << endl;
     else cout << "NO" << endl;
    }
    
    else {
     if (any%4 == 0) cout << "YES" << endl;
     else cout << "NO" << endl;
    }
}
