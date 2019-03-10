// Problema B: MaratonIME educates
// Link: https://vjudge.net/contest/286965#problem/B

// Status: PASSING

// Input
// On the first line, an integer n, the number of cars. On the second line, n integers a1, ..., an, how many people arrived in each car.
// Limits
// 1 ≤ n ≤ 10^5.
// 1 ≤ ai ≤ 5, for all i.


// Output
// Print a single integer, the minimum number of cars needed to take everyone to the restaurant.

#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int contador = 0;
    for(int i = 0; i < x; i ++) {
        int temp = 0;
        cin >> temp;
        contador += temp;
    }
    
    double dividido = ((int) contador / 5);
    int d = contador % 5;

    if (d == 0) {
        cout << dividido;
    }
    else {
        cout << (dividido + 1);
    }

    cout << "\n";
}