#include <iostream>
#include <vector>

using namespace std;

void read(vector<double>& v) {
     int n = v.size();
     for (int i = 0; i < n; ++i) {
         cin >> v[i]; 
     }
}

void write(const vector<double>& v) {
     int n = v.size();
     for (int i = 0; i < n; ++i) {
         if (i > 0) cout << ' ';
         cout << v[i];
     }
}

void ordena_per_insercio(vector<double>& v) {
     int n = v.size();
     for (int i = 1; i < n; ++i) {
         double x = v[i];
	 int j = i;
	 while (j > 0 and v[j-1] > x) {
	     v[j] = v[j-1];
	     --j;
	 }
	 v[j] = x;
     }
}

int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    read(v);
    ordena_per_insercio(v);
    write(v);
    cout << endl;
}
