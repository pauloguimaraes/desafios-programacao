// Problema D: Two Distinct Points
// Link: https://vjudge.net/contest/286965#problem/D

// Status: PASSING

// Input
// The first line of the input contains one integer q (1≤q≤500) — the number of queries.
// Each of the next q lines contains four integers l1i,r1i,l2i and r2i (1≤l1i,r1i,l2i,r2i≤10^9,l1i<r1i,l2i<r2i) — the ends of the segments in the i-th query.


// Output
// Print 2q integers. For the i-th query print two integers ai and bi — such numbers that l1i≤ai≤r1i, l2i≤bi≤r2i and ai≠bi. Queries are numbered in order of the input.
// It is guaranteed that the answer exists. If there are multiple answers, you can print any.

#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int vetor_a[x][2];
    int vetor_b[x][2];

    for(int i=0; i < x; i++) {
        cin >> vetor_a[i][0] >> vetor_a[i][1] >> vetor_b[i][0] >> vetor_b[i][1];
    }

    for(int i=0; i<x; i++) {
        int a = vetor_a[i][0];

        int b = a;

        while(a == b) {
            if(vetor_b[i][0] != a){
                b = vetor_b[i][0];
            } else {
                if(vetor_b[i][1] != a) {
                    b = vetor_b[i][1];
                } else {
                    a = vetor_a[i][1];
                }
            }
        }

        cout << a << " " << b;
        cout << "\n";
    }

    cout << "\n";
}