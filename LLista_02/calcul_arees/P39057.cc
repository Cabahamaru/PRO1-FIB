#include <iostream>
#include <string>
using namespace std;

int main() {
   cout.setf(ios::fixed); 
   cout.precision(6);
   
   const double Pi = 3.14159265358979323846;
   
   int n;
   double llargada, amplada, radi;
   string x;
   cin >> n;
   
   while (cin >> x) {
       if (x == "rectangle") {
	  cin >> llargada >> amplada;
	  cout << llargada*amplada << endl;
       }
       else if (x == "cercle") {
	   cin >> radi;
	   cout << Pi*radi*radi << endl;
       }
   }
}
