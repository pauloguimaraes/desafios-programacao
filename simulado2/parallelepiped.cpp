// Problema A: Parallelepiped
// Link: https://vjudge.net/contest/288558#problem/B

// Status: PASSING

// Problem
// You've got a rectangular parallelepiped with integer edge lengths. You know the areas of its three faces that have a common vertex. Your task is to find the sum of lengths of all 12 edges of this parallelepiped.

// Input
// The first and the single line contains three space-separated integers — the areas of the parallelepiped's faces. The area's values are positive ( > 0) and do not exceed 10^4. It is guaranteed that there exists at least one parallelepiped that satisfies the problem statement.

// Output
// Print a single number — the sum of all edges of the parallelepiped.


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int x = sqrt((a * b) / c);
    int y = sqrt((a * c) / b);
    int z = sqrt((b * c) / a);

    cout << (x + y + z) * 4 << "\n";
}