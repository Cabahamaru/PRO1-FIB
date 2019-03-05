#include <iostream>

using namespace std;

int main() {
  
  cout.setf(ios::fixed); 
  cout.precision(2);
  
   int n;
   cin >> n;
   double x, aux1, aux2;
   aux1 = aux2 = 0;
   for (int i = 0; i < n; ++i)  {
      cin >> x;
      aux1 = aux1 + x*x;
      aux2 = aux2 + x;
   }
   double result = aux1/(n-1) - (aux2*aux2)/(n*n - n);
   
   cout << result << endl;
    
}
