// Problema E: Boxes Packing
// Link: https://vjudge.net/contest/293212#problem/E

// Status: PASSING

// Input
// The first line of the input contains three integers n, m, k (1≤n,m≤2⋅10^5, 1≤k≤10^9) — the number of objects, the number of boxes and the size of each box.
// The second line of the input contains n integers a1,a2,…,an (1≤ai≤k), where ai is the size of the i-th object.

// Output
// Print the maximum number of objects Maksim can pack using the algorithm described in the problem statement.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n, m, k;
    cin >> n >> m >> k;

    vector<long> objetos(n);

    for(long i=0; i<n; i++)
        cin >> objetos[i];
    
    reverse(objetos.begin(), objetos.end());
    int removido = 0;

    for(int i=0; i<n; i++) {
        if(removido - objetos[i] < 0) {
            if(m == 0) {
                cout << i << endl;
                exit(0);
            }
            else {
                --m;
                removido = k - objetos[i];
            }
        }
        else {
            removido -= objetos[i];
        }
    }

    cout << n << endl;
}