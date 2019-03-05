#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Provincia { 
  string nom; 
  string capital; 
  int habitants; 
  int area; 
  double pib; 
};

struct Pais { 
  string nom; 
  string capital; 
  vector<Provincia> provs; 
};

typedef vector<Pais> Paisos;

double pib(const Paisos& p, char c, double d) {
     int n1 = p.size();
     double sum = 0;
     for (int i = 0; i < n1; ++i) {
         if (p[i].nom[0] == c) {
	    int n2 = p[i].provs.size();
	    for (int j = 0; j < n2; ++j) {
	        Provincia prov = p[i].provs[j];
	        if ((double(prov.habitants)/double(prov.area)) > d) {
		     sum = sum + prov.pib;
		}
	    }
	 }
     }
     return sum;
}

int main() {
    int npaises;
    cin >> npaises;
    Paisos p(npaises);
    for (int i = 0; i < npaises; ++i) {
        cin >> p[i].nom;
	cin >> p[i].capital;
	int nprovs;
	cin >> nprovs;
        for (int j = 0; j < nprovs; j++) {
            vector<Provincia> provs(nprovs);
	    cin >> provs[j].nom;
	    cin >> provs[j].capital;
	    cin >> provs[j].habitants;
	    cin >> provs[j].area;
	    cin >> provs[j].pib;
	    p[i].provs = provs;
            
       }
   }
   char c = 'c';
   double d;
   cin >> d;
   cout << pib(p,c,d) << endl;

}
