//  https://www.codewars.com/kata/5d59576768ba810001f1f8d6/cpp

#include <vector>

using namespace std;

vector<int> quadratic(int x1, int x2) {
    int a = 1;
    int b = -x1 + -x2;
    int c = x1 * x2;
    return {a, b, c};
}
