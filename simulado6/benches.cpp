// Problema E: Benches
// Link: https://vjudge.net/contest/297761#problem/E

// Status: PASSING

// Input
// The first line contains a single integer n (1≤n≤100) — the number of benches in the park.
// The second line contains a single integer m (1≤m≤10000) — the number of people additionally coming to the park.
// Each of the next n lines contains a single integer ai (1≤ai≤100) — the initial number of people on the i-th bench.

// Output
// Print the minimum possible k and the maximum possible k, where k is the maximum number of people sitting on one bench after additional m people came to the park.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a, a+n);

    int max = a[n-1] + m;
    int aux = m;
    int pos = 0;
    while(aux > 0) {
        a[pos] += 1;
        sort(a, a+n);;
        aux--;
    }

    sort(a, a+n);
    int min = a[n-1];

    cout << min << " " << max << endl;
}