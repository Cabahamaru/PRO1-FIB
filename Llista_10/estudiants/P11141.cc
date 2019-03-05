#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudiant { 
  int dni; 
  string nom; 
  double nota; // La nota és un valor entre 0 i 10, o -1 que representa NP 
  bool repetidor;  
};

void informacio (const vector<Estudiant>& es, double& min, double& max, double& mitj) {
        int n = es.size();
	max = mitj = 0;
	min = 10;
	int count = 0;
	for (int i = 0; i < n; ++i) {
	    if (!(es[i].repetidor) and es[i].nota != -1) {
	       if (es[i].nota >= max) max = es[i].nota;
	       if (es[i].nota <= min) min = es[i].nota;
	       mitj = mitj + es[i].nota;
	       ++count;
	    }
	}
	if (count == 0) {
	   min = -1;
	   max = -1;
	   mitj = -1;
	}
	else {
	   mitj = (mitj/count); 
	}
}

int main() {
    int n;
    cin >> n;
    vector<Estudiant> es(n);
    for (int i = 0; i < n; ++i) {
        cin >> es[i].dni;
	cin >> es[i].nom;
	cin >> es[i].nota;
	string rep;
	cin >> rep;
	if (rep == "true") es[i].repetidor = true;
	else es[i].repetidor = false;
    }
    double min, max, mitj;
    informacio(es,min,max,mitj);
    cout << min << ' ' << ' ' << max << ' ' << mitj << endl;
}