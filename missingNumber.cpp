// Desafio 2: Missing Number
// Link: https://cses.fi/problemset/task/1083/

// Status: PASSED

// Input
// The first input line contains an integer n.
// The second line contains n−1 numbers. Each number is distinct and between 1,2,…,n.

// Output
// Print the missing number.

#include <iostream>

using namespace std;

int main() {
    long x;
    cin >> x;

    int arranjo[x];
    for(int i=1; i < x; i++) {
        int item;
        cin >> item;

        arranjo[item-1] = item;
    }

    int faltante;
    for(int i=0; i < x; i++) {
        if(arranjo[i] != i+1) {
            faltante = i+1;
            break;
        }
    }

    cout << faltante;
    cout << "\n";
}