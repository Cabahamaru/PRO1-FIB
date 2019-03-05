#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Vi; // Vd is an alias for type vector<int>

// Lee una secuencia y la guarda en el vector V
void read(Vi& V) {
    int n = V.size();
    for (int i = 0; i < n; ++i) cin >> V[i];
}

//Pre: entra un vector de mida n
//Post: retorna el nombre d'elements iguals
//al ultim element de v
int frequencia_ultimo(Vi& V) {
    int n = V.size();
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] == v[n-1]) ++count;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    Vi V(n);
    read(V);
    cout << frecuencia_ultimo(V) << endl;
}
