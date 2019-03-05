#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void read(vector<double>& v) {
     int n = v.size();
     for (int i = 0; i < n; ++i) {
         cin >> v[i]; 
     }
}

void write(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (i > 0 ) cout << ' ';
        cout << v[i];
    }
}

vector<double> fusio(const vector<double>& v1, const vector<double>& v2) {
               vector<double> v3;
	       int i = 0, j = 0;
	       while (i < v1.size() and j < v2.size()) {
		     if (v1[i] <= v2[j]) {
		        v3.push_back(v1[i]);
			++i;
		     }
		     else {
		        v3.push_back(v2[j]);
			++j;
		     }
	       }
	       while (i < v1.size()) {
		   v3.push_back(v1[i]);
		   ++i;
	       }
	       while (j < v2.size()) {
		   v3.push_back(v2[j]);
		   ++j;
	       }
	       return v3;
}

int main() {
    int n1, n2;
    cin >> n1;
    vector<double> v1(n1);
    read(v1);
    cin >> n2;
    vector<double> v2(n2);
    read(v2);
    vector<double> v3(n1+n2);
    v3 = fusio(v1,v2);
    write(v3);
    cout << endl;
}