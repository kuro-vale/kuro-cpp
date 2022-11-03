// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/cpp

#include <iostream>
#include <string>

using namespace std;

string countSheep(int number) {
    string sheep;
    for (int i = 1; i <= number; ++i) {
        sheep += to_string(i) + " sheep...";
    }
    return sheep;
}

int main() {
    cout << countSheep(2) << endl;
    return 0;
}
