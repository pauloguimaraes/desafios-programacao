// Problema J: Little Girl and Maxiumum XOR
// Link: https://vjudge.net/contest/294826#problem/J

// Status: PASSING

// Input
// The single line contains space-separated integers l and r (1 ≤ l ≤ r ≤ 10^18).
// Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout streams or the %I64d specifier.

// Output
// In a single line print a single integer — the maximum value of  for all pairs of integers a|+|b (l ≤ a ≤ b ≤ r).



#include <iostream>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    long long xorN = x ^ y;
    long long resp = 1;
    while(xorN) {
        xorN /= 2;
        resp <<= 1;
    }

    cout << (--resp) << endl;
}