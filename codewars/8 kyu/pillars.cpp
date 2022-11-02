// https://www.codewars.com/kata/5bb0c58f484fcd170700063d/cpp

#include <iostream>

using namespace std;

long pillars(int num_of_pillars, int distance, int width) {
    distance *= 100;
    if (num_of_pillars == 1) return 0;
    return distance * (num_of_pillars - 1) + width * (num_of_pillars - 2);
}

int main() {
    cout << pillars(2, 20, 10) << endl;
    return 0;
}
