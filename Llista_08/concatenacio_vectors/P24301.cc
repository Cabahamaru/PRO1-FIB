#include <iostream>
#include <vector>

using namespace std;

//LLegeix una seq. de nombres enters i la guarda al vector V
void read(vector<int>& V) {
    int n = V.size();
    for (int i = 0; i < n; ++i) cin >> V[i];
}

//Retorna per pantalla el vector V
void write(const vector<int>& V) {
  bool first = true;
  int n = V.size();
  for (int i = 0; i < n; ++i) {
     if (first) first = false; 
     else cout << " "; 
     cout << V[i];
  }
  cout << endl;
}

//Pre: dos vectors de nombres reals v1 i v2
//Post: retorna un vector de mida; la mida de v1 + la mida de v2
//amb els elements de v1 seguits dels elements de v1
vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
     int n1 = v1.size();
     int n2 = v2.size();
     int n3 = n1 + n2;
     vector<int> v3(n3); 
     // Copiamos en v3 los elemntos de v1 desde la posicion 0 hasta n1-1
     for (int i = 0; i < n1; ++i) {
         v3[i] = v1[i]; 
     }
     // Copiamos en v3 los elemntos de v2 desde n1 hasta n1+n2-1
     for(int i = 0; i < n2; ++i) {
         v3[i+n1] = v2[i]; 
     }
     return v3;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> v1(n1);
    read(v1);
    vector<int> v2(n2);
    read(v2);
    write(concatenacio(v1,v2));
}
