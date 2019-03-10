// Problema A: Watermelon
// Link: https://vjudge.net/contest/286965#problem/A

// Status: PASSING

// Input
// The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

// Output
// Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int resto = x % 2;
    
    if (x == 2) {
        cout << "NO";
    }
    else {
        if(resto > 0) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
    }

    cout << "\n";
}