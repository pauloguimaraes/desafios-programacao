// Problema F: Coins
// Link: https://vjudge.net/contest/286965#problem/F

// Status: PASSING

// Input
// The only line of the input contains two integers n and S (1≤n≤100000, 1≤S≤10^9)

// Output
// Print exactly one integer — the minimum number of coins required to obtain sum S.


#include <iostream>

using namespace std;

int main() {
    int x;
    int valor;
    cin >> x >> valor;

    int total = valor / x;

    if(valor % x)
        cout << (total+1);
    else
        cout << total;

    cout << "\n";
}