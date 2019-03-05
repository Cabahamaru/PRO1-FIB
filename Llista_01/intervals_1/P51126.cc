#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    //formula generalitzada dels casos on hi ha intersecció:
    //[max(min(A),min(B) , min(max(A),max(B)]
    //no hi ha interval quan: [max(min(A),min(B)) > min(max(A),max(B))]
    
    if (max(x1,x2) > min(y1,y2)) cout << "[]" << endl; //no hi ha intersecció
    else cout << "[" << max(x1,x2) << "," << min(y1,y2) << "]" << endl; //hi ha intersecció
      
  
}
