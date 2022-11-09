// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/cpp
#include <iostream>
#include <algorithm>

using namespace std;

unsigned short int expressionsMatter(unsigned short int a, unsigned short int b, unsigned short int c) {
    int results[] = {a * b * c, a + b + c, a * (b + c), (a + b) * c};
    return *max_element(begin(results), end(results));
}

int main() {
    cout << expressionsMatter(5, 4, 3) << endl;
    return 0;
}
