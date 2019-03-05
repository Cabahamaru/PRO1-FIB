#include <iostream>
#include <string>

using namespace std;

/*
void escriu_linia(char c, string s, bool b) {
     if (s == "lletra" and c >= 'A' and c <= 'z') b = true;
     
     if (s == "digit" and c < 'A' and c > 'z') b = true;
     
     if (s == "vocal" and (c == 'a' or c == 'e' or c == 'i' or
         c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I' or
         c == 'O' or c == 'U')) b = true;
     
     if (s == "consonant" and (c != 'a' and c != 'e' and c != 'i' and
         c != 'o' and c != 'u' and c != 'A' and c != 'E' and c != 'I' and
         c != 'O' and c != 'U')) b = true;
     
     if (s == "majuscula" and c >= 'A' and c <= 'Z') b = true;
	 
     if (s == "minuscula" and c >= 'a' and c <= 'z') b = true; 
  
     cout << s << "('" << c << "') = "; 
     if (b) cout << "cert" << endl; 
     else cout << "fals" << endl;
}
*/

//inicialitzar 6 booleans, cada un per cada condició


int main() {
   char c;
   string s;
   bool b;
   cin >> c;
   while (cin >> s) {
       escriu_linia(c,s,b);
   }
}
