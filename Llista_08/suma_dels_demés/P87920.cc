#include <iostream>
#include <vector>

using namespace std;

//Llegeix una seq. de nombres reals i els gaurda a v
void read(vector<int>& v) {
     int n = v.size();
     for (int i = 0; i < n; ++i) cin >> v[i];
     
}

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
	bool found = false;
        vector<int> V(n);
	read(V);
	for (int i = 0; i < n; ++i) {
	    sum = sum + V[i]; 
	}
	for (int i = 0; i < n; ++i) {
	    if (V[i] == sum - V[i]) found = true; 
	}
	if (found) cout << "YES" << endl;
	else cout << "NO" << endl;
	
    }
}

