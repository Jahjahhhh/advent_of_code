#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    short increased = 0;

    vector<int> arr = {199, 200, 208, 210, 200, 207, 240, 269, 260, 263};

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < arr[i+1]) increased++;
    }

    cout << increased;

    return EXIT_SUCCESS;

}