#include <iostream>
#include <vector>

using namespace std;

const int MIN = 1000000000;
const int MAX = 1000001000;

int main() {
    int n;
    cin >> n;
    vector<int> V(MAX-MIN+1,0); //vector de 1001 posicions
    
    //Leemos el numero y hacemos su traslacion al vector V incrementando
    //su valor en 1
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
	x = x - MIN;
	++V[x];
    }
    //Recorremos el vector V, imprimiendo aquellos valores
    //distintos de 0 haciendo su traslacion entre MAX y MIN
    for (int i = 0; i < V.size(); ++i) {
        if (V[i] != 0) cout << MIN + i << " : " << V[i] << endl; 
    }
}
