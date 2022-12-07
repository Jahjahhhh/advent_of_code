#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    ifstream input("input.txt");
    vector<int> numbers;
    string data;
    int number = 0;

    while(getline(input, data)) {
        if(data != "") {
            number += stoi(data);
        } else {
            numbers.push_back(number);
            number = 0;
        }
    }

    sort(numbers.begin(), numbers.end(), greater<>());

    cout << numbers[0]+numbers[1]+numbers[2];

    return 0;
}
