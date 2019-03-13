// Problema I: Bicycle Race
// Link: https://vjudge.net/contest/286965#problem/I

// Status: PASSING

// Input
// The first line of the input contains an integer n (4 ≤ n ≤ 1000) — the number of straight sections of the track.
// The following (n + 1)-th line contains pairs of integers (xi, yi) ( - 10 000 ≤ xi, yi ≤ 10 000). The first of these points is the starting position. The i-th straight section of the track begins at the point (xi, yi) and ends at the point (xi + 1, yi + 1).
// It is guaranteed that:
// the first straight section is directed to the north;
// the southernmost (and if there are several, then the most western of among them) point of the track is the first point;
// the last point coincides with the first one (i.e., the start position);
// any pair of straight sections of the track has no shared points (except for the neighboring ones, they share exactly one point);
// no pair of points (except for the first and last one) is the same;
// no two adjacent straight sections are directed in the same direction or in opposite directions.

// Output
// Print a single integer — the number of dangerous turns on the track.


#include <iostream>

using namespace std;

int main() {
    long tamanho;
    long x, y;
    cin >> tamanho;
    
    for(int i=0; i<tamanho+1; i++)
        cin >> x >> y;

    long angulos = ((tamanho - 4) / 2);
    cout << angulos << "\n";
}