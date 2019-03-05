#include <iostream>
using namespace std;

int main() {
   int d, m, a;
   bool correcta;
   
   while (cin >> d >> m >> a) {
       if ((d > 0 and d <=31) and (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or
	     m == 10 or m == 12)) {
	   correcta = true;
       }
       else if ((d > 0 and d <= 30) and (m == 4 or m == 6 or m == 9 or m == 11)) {
	   correcta = true;
       }
       else if (m == 2) {
	   if (a%100 == 0 and (a/100)%4 == 0 and (d > 0 and d <= 29)) {
                correcta = true;
           }
           else if (d > 0  and d <= 28) correcta = true;
	   else correcta = false; 
       }
       else correcta = false;
       
     if (correcta) cout << "Data Correcta" << endl;
     else cout << "Data Incorrecta" << endl;
   }
}