// Problema F: Design Tutorial: Learn from Math 
// Link: https://vjudge.net/contest/291554#problem/F

// Status: PASSING

// Input
// The only line contains an integer n (12 ≤ n ≤ 10^6).

// Output
// Output two composite integers x and y (1 < x, y < n) such that x + y = n. If there are multiple solutions, you can output any of them.


#include <iostream>
#include <cmath>

using namespace std;

int primo(int numero) {
    if(numero < 2)
        return 0;
    
    int raiz = sqrt(numero);
    for(int i=2; i<=raiz; i++)
        if(numero % i == 0)
            return 0;
    
    return 1;
}

int main() {
    int x;

    cin >> x;

    int a = 0;
    int b = 0;

    for(int i=2; i<x; i++) {
        for(int j=2; j<x; j++) {
            if(primo(i) == 0 && primo(j) == 0 && i+j == x) {
                a = i;
                b = j;
                break;
            }
        }

        if(a != 0 && b != 0) {
            break;
        }
    }

    cout << a << " " << b << endl;
}