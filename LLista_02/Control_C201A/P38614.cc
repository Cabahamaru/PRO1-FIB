#include <iostream>
using namespace std;
 
int main() {
    int a;
    int count = 0;
    cin >> a ;
    for(int i = a; i > 0; i = i/100) {
    count = count + i%10;  
    }
   
    if(count%2 == 0 or count == 0) cout << a <<" ES TXATXI" << endl;
    else cout << a <<" NO ES TXATXI" << endl;
}