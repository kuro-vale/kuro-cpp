#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> flip(const char dir, vector<int> arr) {
    if (dir == 'L') {
        sort(arr.begin(), arr.end(), greater<>());
        return arr;
    } else if (dir == 'R') {
        sort(arr.begin(), arr.end());
        return arr;
    } else {
        cout << "Please enter a valid direction ('L' or 'R')";
    }
}
