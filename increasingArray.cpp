// Desafio 4: Increasing Array
// Link: https://cses.fi/problemset/task/1094/

// Status: PASSED

// Input
// The first input line contains an integer n: the size of the array.
// Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

// Output
// Print the minimum number of turns.

#include <iostream>

using namespace std;

int main() {
    long x;
    cin >> x;

    long arranjo[x];
    for(long i=0; i < x; i++)
        cin >> arranjo[i];
    
    long acumulador = 0;
    for(long i=1; i < x; i++) {
        if(arranjo[i] < arranjo[i-1]) {
            acumulador += (arranjo[i-1] - arranjo[i]);
            arranjo[i] = arranjo[i-1];
        }
    }

    cout << acumulador;
    cout << "\n";
}