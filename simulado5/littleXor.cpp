// Problema A: Little XOR
// Link: https://vjudge.net/contest/294826#problem/A

// Status: PASSING

// Input
// The first line contains integer n (1 ≤ n ≤ 100) — the number of elements in the array. The second line contains the space-separated integers from the array. All numbers are non-negative integers strictly less than 2^30.

// Output
// Print a single integer — the required maximal xor of a segment of consecutive elements.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long numeros[n];

    for(int i=0; i < n; i++)
        cin >> numeros[i];

    long long resposta = numeros[0];
    long long atual;
    for(int i=0; i < n; i++) {
        atual = numeros[i];

        if(atual > resposta)
            resposta = atual;
        
        for(int y= i+1; y < n; y++) {
            atual ^= numeros[y];

            if(atual > resposta)
                resposta = atual;
        }
    }

    cout << resposta << endl;
}