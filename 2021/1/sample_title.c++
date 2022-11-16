#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

vector<short> writeInVector();

int main(void) {

    short increased = 0;
    short measurement1;
    short measurement2;

    vector<short> arr;

    arr = writeInVector();

    for(short i = 0; i < arr.size(); i++) {
        measurement1 = arr[i] + arr[i+1] + arr[i+2];
        measurement2 = arr[i+1] + arr[i+2] + arr[i+3];
        if(measurement1 < measurement2) increased++;
    }

    cout << increased;

    return EXIT_SUCCESS;

}

/*
Takes the input string in input.txt and converts it to an integers and appends the integers to the vector and retorns it.
*/
vector<short> writeInVector() {

    vector<short> vector;
    string temporary;
    short currentDepth;
    ifstream inFile("input.txt");

    while(inFile >> temporary) {
        currentDepth = stoi(temporary);
        vector.push_back(currentDepth);
    }

    inFile.close();

    return vector;
}