#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool es_palindrom(const string& s) {
     int n = s.size();
     bool palindrom = true;
     int i = 0;
     int aux = n - 1;
     while (palindrom and i < n/2)  {
         if (s[i] != s[aux]) palindrom = false;
	 --aux;
	 ++i;
     }
     return palindrom;
}

int main() {
    string s;
    cin >> s;
    if (es_palindrom(s)) cout << "és palíndrom" << endl;
    else cout << "no és palíndrom" << endl;
}