// Problema J: Minimum Ternary String
// Link: https://vjudge.net/contest/286965#problem/J

// Status: PASSING

// Input
// The first line of the input contains the string s consisting only of characters '0', '1' and '2', its length is between 1 and 10^5 (inclusive).

// Output
// Print a single string — the minimum possible (lexicographically) string you can obtain by using the swaps described above arbitrary number of times (possibly, zero).

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string ternario;
    cin >> ternario;

    int percorreu = 0;
    int tamanho = ternario.length();

    string arranjoAPartirDo2;
    string arranjoAntesDo2;

    for(int i=0; i<tamanho; i++)
        if(ternario.at(i) == '2') {
            for(int j=i; j<tamanho; j++) {
                if(ternario.at(j) != '1')
                    arranjoAPartirDo2 += ternario.at(j);
                else
                    arranjoAntesDo2 += ternario.at(j);
            }

            break;
        }
        else
            arranjoAntesDo2 += ternario.at(i);
    
    sort(arranjoAntesDo2.begin(), arranjoAntesDo2.end());
    cout << arranjoAntesDo2 + arranjoAPartirDo2 << "\n";
}