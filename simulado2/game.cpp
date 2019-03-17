// Problema F: Game
// Link: https://vjudge.net/contest/288558#problem/F

// Status: PASSING

// Problem
// Two players play a simple game. Each player is provided with a box with balls. First player's box contains exactly n1 balls and second player's box contains exactly n2 balls. In one move first player can take from 1 to k1 balls from his box and throw them away. Similarly, the second player can take from 1 to k2 balls from his box in his move. Players alternate turns and the first player starts the game. The one who can't make a move loses. Your task is to determine who wins if both players play optimally.

// Input
// The first line contains four integers n1, n2, k1, k2. All numbers in the input are from 1 to 50.
// This problem doesn't have subproblems. You will get 3 points for the correct submission.

// Output
// Output "First" if the first player wins and "Second" otherwise.


#include <iostream>

using namespace std;

int main() {
    int p1, p2, b1, b2;

    cin >> p1 >> p2 >> b1 >> b2;

    if(p1 > p2)
        cout << "First" << "\n";
    else
        cout << "Second" << "\n";
}