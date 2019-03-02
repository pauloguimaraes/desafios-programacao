// Desafio 1: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068/

// Status: PASSED

// Input
// The only input line contains an integer n.

// Output
// Print a line that contains all values of n during the algorithm.

#include <iostream>

using namespace std;

int main() {
    long x;
    cin >> x;
    cout << x;

    while(x != 1) {
        cout << " ";

        if(x % 2 == 0)
            x /= 2;
        else
            x = (x * 3) + 1;

        cout << x;
    }
    cout << "\n";
}