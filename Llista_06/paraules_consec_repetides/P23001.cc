#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, n;
    int count = 1;
    int maxcount = 0;
    cin >> s;
    n = s;
    while (cin >> s) {
        if (count >= maxcount) maxcount = count;
        if (s == n) ++count;
	else count = 0;
    }
    if (count >= maxcount) maxcount = count;
    cout << maxcount << endl;
}
