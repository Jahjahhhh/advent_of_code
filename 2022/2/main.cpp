#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int partOne();

// part 2 of the puzzle
int main(void) { 
    // Uncomment line 14 to run part 1 of the puzzle
    // partOne();
    ifstream input("input.txt");
    char them;
    char me;
    vector<char> theirMoves;
    vector<char> myMoves;
    int myPoints = 0;

    while(input >> them >> me) {
        theirMoves.push_back(them);
        myMoves.push_back(me);
    }
    // A = ROCK (1)        X = LOSS (0)    ROCK (1)
    // B = PAPER (2)       Y = DRAW (3)    PAPER (2)
    // C = SCISSORS (3)    Z = WIN (6)     SCISSORS (3)
    for(int i = 0; i < myMoves.size(); i++) {
        switch(theirMoves[i]) {
            case 'A': if(myMoves[i] == 'Y') myPoints += 4; else if(myMoves[i] == 'X') myPoints += 3; else if(myMoves[i] == 'Z') myPoints += 8; break;
            case 'B': if(myMoves[i] == 'Y') myPoints += 5; else if(myMoves[i] == 'X') myPoints += 1; else if(myMoves[i] == 'Z') myPoints += 9; break;
            case 'C': if(myMoves[i] == 'Y') myPoints += 6; else if(myMoves[i] == 'X') myPoints += 2; else if(myMoves[i] == 'Z') myPoints += 7; break;
            default: cout << "wrong input\n";
        }
    }

    cout << myPoints;

    return 0;
}

int partOne(void) {
    
    ifstream input("input.txt");
    char them;
    char me;
    vector<char> theirMoves;
    vector<char> myMoves;
    int myPoints = 0;

    while(input >> them >> me) {
        theirMoves.push_back(them);
        myMoves.push_back(me);
    }
    // A = ROCK (1)        X = ROCK (1)         VIC ROYALE = 6
    // B = PAPER (2)       Y = PAPER (2)        L          = 0
    // C = SCISSORS (3)    Z = SCISSORS (3)     TIE        = 3
    for(int i = 0; i < myMoves.size(); i++) {
        switch(theirMoves[i]) {
            case 'A': if(myMoves[i] == 'Y') myPoints += 8; else if(myMoves[i] == 'X') myPoints += 4; else if(myMoves[i] == 'Z') myPoints += 3; break;
            case 'B': if(myMoves[i] == 'Y') myPoints += 5; else if(myMoves[i] == 'X') myPoints += 1; else if(myMoves[i] == 'Z') myPoints += 9; break;
            case 'C': if(myMoves[i] == 'Y') myPoints += 2; else if(myMoves[i] == 'X') myPoints += 7; else if(myMoves[i] == 'Z') myPoints += 6; break;
            default: cout << "wrong input\n";
        }
    }

    cout << myPoints;

    return 0;
}