// https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/cpp

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int sumOfDifferences(const vector<int> &arr) {
    if (arr.empty()) return 0;
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    return max - min;
}

int main() {
    cout << sumOfDifferences({1, 2, 10}) << endl;
    return 0;
}
