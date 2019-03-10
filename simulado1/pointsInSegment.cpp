// Problema E: Points in Segments
// Link: https://vjudge.net/contest/286965#problem/E

// Status: PASSING

// Input
// The first line of the input contains two integers n and m (1≤n,m≤100) — the number of segments and the upper bound for coordinates.
// The next n lines contain two integers each li and ri (1≤li≤ri≤m) — the endpoints of the i-th segment. Segments may intersect, overlap or even coincide with each other. Note, it is possible that li=ri, i.e. a segment can degenerate to a point.


// Output
// In the first line print one integer k — the number of points that don't belong to any segment.
// In the second line print exactly k integers in any order — the points that don't belong to any segment. All points you print should be distinct.
// If there are no such points at all, print a single integer 0 in the first line and either leave the second line empty or do not print it at all.

#include <iostream>

using namespace std;

int main() {
    int x;
    int tamanho_da_reta;

    cin >> x >> tamanho_da_reta;

    int vetores[tamanho_da_reta];
    for(int i=0; i < tamanho_da_reta; i++) {
        vetores[i] = -1;
    }

    for(int i=1; i <= x; i++) {
        int inicio = 0;
        int fim = 0;

        cin >> inicio >> fim;

        if(inicio == fim){
            vetores[inicio-1] = inicio;
        }
        else {
            inicio -= 1;
            do {
                inicio ++;
                vetores[inicio-1] = inicio;
            } while(inicio != fim);
        }
    }

    int contador = 0;
    for(int i=0; i < tamanho_da_reta; i++) {
        if(vetores[i] == -1){
            contador++;
        }
    }

    if(contador == 0) {
        cout << "0" << "\n";
    }
    else {
        cout << contador << "\n";
        for(int i=0; i < tamanho_da_reta; i++) {
            if(vetores[i] == -1) {
                cout << (i+1) << " ";
            }
        }
        cout << "\n";
    }
}