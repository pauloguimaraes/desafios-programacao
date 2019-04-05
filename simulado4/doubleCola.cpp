// Problema A: Double Cola
// Link: https://vjudge.net/contest/293212#problem/A

// Status: PASSING

// Input
// The input data consist of a single integer n (1 ≤ n ≤ 10^9).
// It is guaranteed that the pretests check the spelling of all the five names, that is, that they contain all the five possible answers.

// Output
// Print the single line — the name of the person who drinks the n-th can of cola. The cans are numbered starting from 1. Please note that you should spell the names like this: "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" (without the quotes). In that order precisely the friends are in the queue initially.

#include <iostream>

using namespace std;

int main() {
    string sheldon = "Sheldon";
    string leonard = "Leonard";
    string penny = "Penny";
    string rajesh = "Rajesh";
    string howard = "Howard";

    string vetor[] = {sheldon, leonard, penny, rajesh, howard};

    int x = 0;
    cin >> x;
    x--;

    while(x >= 5)
        x = (x - 5) / 2;

    cout << vetor[x] << endl;
}