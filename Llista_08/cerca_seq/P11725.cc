#include <iostream>
#include <vector>

using namespace std;

//Pre: entra un enter x i un vector d'enters de mida n
//Post: retorna true si dins del vector hi ha un element
//igual que x, i retorna false altrament
bool hi_es(int x, const vector<int>& v) {
     int n = v.size();
     bool found = false;
     for (int i = 0; !found and i < n; ++i) {
         if (v[i] == x) found = true; 
     }
     return found;
}
