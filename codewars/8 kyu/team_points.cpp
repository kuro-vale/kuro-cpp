// https://www.codewars.com/kata/5bb904724c47249b10000131/cpp

#include <iostream>
#include <array>

using namespace std;

int points(const array<string, 10> &games) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (games[i][0] > games[i][2]) {
            score += 3;
        } else if (games[i][0] == games[i][2]) {
            score += 1;
        }
    }
    return score;
}

int main() {
    cout << points(array<string, 10>{"1:0", "2:0", "3:0", "4:0", "2:1", "3:1", "4:1", "3:2", "4:2", "4:3"})
         << endl;
    return 0;
}
