#include <iostream>
#include <string>
using namespace std;

//retorna true si un caracter esta en minuscula, retorna false altrament
bool is_lowercase(char c) {
     if (c >= 'a' and c <= 'z') return true;
     else return false;
}

//retorna true si un caracter esta en majuscula, retorna false altrament
bool is_uppercase(char c) {
     if (c >= 'A' and c <= 'Z') return true;
     else return false;
}

// see the problem statement
void make_uppercase_lowercase(const string& T) {
     char c;
     while (cin >> c) {
	   if (is_lowercase(c)) {
	      int aux = c - 'a';
	      if (T[aux] == 'U') cout << char('A' - 'a' + c);
	      else cout << c;
	     }
	   if (is_uppercase(c)) {
	      int aux = c - 'A';
	      if (T[aux] == 'L') cout << char('a' - 'A' + c);
	      else cout << c;
	   } 
     }
     cout << endl;
}

int main() {
    string T; 
    cin >> T;
    make_uppercase_lowercase(T);
} 
