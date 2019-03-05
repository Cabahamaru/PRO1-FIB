#include <iostream>
using namespace std;

int main() {
    int y, d, h, m, s, total;
    cin >> y >> d >> h >> m >> s;
      y = 365*24*60*60*y; //segons d'un any
      d = 24*60*60*d;     //segons d'un dia
      h = 60*60*h;        //segond d'una hora
      m = 60*m;           //segons d'un minut
      
      total = y + d + h +m +s;
      cout << total << endl;
}
