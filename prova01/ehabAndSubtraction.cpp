// Problema B: Ehab and subtraction
// Link: https://vjudge.net/contest/291554#problem/B

// Status: PASSING

// Input
// The first line contains integers n and k (1≤n,k≤10^5), the length of the array and the number of operations you should perform.
// The second line contains n space-separated integers a1,a2,…,an (1≤ai≤10^9), the elements of the array.

// Output
// Print the minimum non-zero element before each operation in a new line.


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    n = 0;
    k = 0;

    cin >> n >> k;

    int array[n];
    for(int i=0; i<n; i++)
        cin >> array[i];

    sort(array, array+n);

    int menor = array[0];
    cout << menor << endl;

    int diff_zero = 1;
    for(int i=1; i<n; i++) {
        if(diff_zero >= k)
            break;

        if(array[i] - menor > 0) {
            cout << array[i] - menor << endl;
            menor = menor + array[i] - menor;
            diff_zero++;
        }
    }

    while(diff_zero < k) {
        cout << "0" << endl;
        diff_zero++;
    }
}