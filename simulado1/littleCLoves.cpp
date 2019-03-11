// Problema G: Little C Loves 3
// Link: https://vjudge.net/contest/286965#problem/G

// Status: PASSING

// Input
// A single line containing one integer n (3≤n≤10^9) — the integer Little C has.

// Output
// Print 3 positive integers a,b,c in a single line, such that a+b+c=n and none of them is a multiple of 3.
// It can be proved that there is at least one solution. If there are multiple solutions, print any of them.


#include <iostream>

using namespace std;

int main() {
    long x;
    cin >> x;

    long arranjo[3];
    long dividido_por_tres = x / 3;
    long sobra = 0;

    if(dividido_por_tres % 3 == 0)
        dividido_por_tres -= 1;
    
    for(int i=0; i<3; i++)
        arranjo[i] = dividido_por_tres;
    
    sobra = x - (dividido_por_tres * 3);

    if(sobra == 5) {
        arranjo[2] += 3;
        arranjo[1] += 2;
    }
    else if(sobra == 4) {
        arranjo[2] += 2;
        arranjo[1] += 2;
    }
    else if(sobra == 3) {
        arranjo[2] += 3;
    }
    else if(sobra == 2) {
        arranjo[2] += 2;

        if(arranjo[2] % 3 == 0) {
            arranjo[2] -= 1;
            arranjo[1] += 1;
        }

    }
    else if(sobra == 1) {
        arranjo[2] -= 1;
        arranjo[1] += 2;

        if(arranjo[1] % 3 == 0) {
            arranjo[1] -= 1;
            arranjo[2] += 1;
        }
    }
    
    for(int i=0; i<3; i++)
        cout << arranjo[i] << " ";

    cout << "\n";
}