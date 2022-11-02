// https://www.codewars.com/kata/5b853229cfde412a470000d0/cpp

#include <iostream>

using namespace std;

int twice_as_old(int dad, int son) {
    return abs(dad - son * 2);
}

int main() {
    cout << twice_as_old(36, 7) << endl;
    return 0;
}
