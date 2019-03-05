#include <iostream>

using namespace std;

char atbash(char c) {
    if (c >= 'A' and c <= 'Z') return 'a' - 'A' + c;
    else return 'A' - 'a' + c;
}
