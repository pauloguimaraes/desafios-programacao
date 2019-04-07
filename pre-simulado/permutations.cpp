// Desafio 5: Permutations
// Link: https://cses.fi/problemset/task/1070/

// Status: PASSED

// Input
// The only input line contains an integer n.

// Output
// Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;
    
    if (x == 2 || x == 3) 
        cout << "NO SOLUTION";
    else {
        int m = 2;
        while(m <= x) {
            cout << m << " ";
            m += 2;
        }
        
        m = 1;
        while(m <= x) {
            cout << m << " ";
            m += 2;
        }
    }
}