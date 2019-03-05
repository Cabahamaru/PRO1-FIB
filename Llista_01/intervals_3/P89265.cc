#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 == x2 and y1 == y2) cout << "=";
    else if (x1 > x2 and y2 > y1) cout << "1";
    else if (x1 >= x2 and y2 > y1) cout << "1"; //cas *
    else if (x1 > x2 and y2 >= y1) cout << "1"; //cas *
    else if (x2 > x1 and y1 > y2) cout << "2";
    else if (x2 >= x1 and y1 > y2) cout << "2";
    else if (x2 > x1 and y1 >= y2) cout << "2";
    else cout << "?";
    
    cout << " , ";
    
    if (max(x1,x2) > min(y1,y2)) cout << "[]" << endl; //no hi ha intersecció
    else
        cout << "[" << max(x1,x2) << "," << min(y1,y2) << "]" << endl; //hi ha intersecció
}
