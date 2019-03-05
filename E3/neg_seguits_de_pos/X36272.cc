#include <iostream>
#include <vector>

using namespace std;

void read(vector<int>& V) {
    int n = V.size();
    for (int i = 0; i < n; ++i) {
        cin >> V[i]; 
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    read(V);
    bool first = true;
    for (int i = 0; i < n; ++i) {
        if (V[i] < 0) {
	   if (first) first = false;
	   else cout << ' ';
	   cout << V[i];
	}
    }
    for (int i = 0; i < n; ++i) {
        if (V[i] > 0) {
	   if (first) first = false;
	   else cout << ' ';
	   cout << V[i];
	}
    }
    cout << endl;
}
