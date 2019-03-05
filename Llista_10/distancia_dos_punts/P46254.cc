#include <iostream>
#include <cmath>

using namespace std;

struct Punt {
  double x, y;
};

double distancia(const Punt& a, const Punt& b) {
       double dist = sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
       return dist;       
}

int main() {
    Punt a;
    cin >> a.x >> a.y;
    Punt b;
    cin >> b.x >> b.y;
    cout << distancia(a,b) << endl;
}
