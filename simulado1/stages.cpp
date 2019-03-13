// Problema H: Stages
// Link: https://vjudge.net/contest/286965#problem/H

// Status: PASSING

// Input
// The first line of input contains two integers — n and k (1≤k≤n≤50) – the number of available stages and the number of stages to use in the rocket.
// The second line contains string s, which consists of exactly n lowercase Latin letters. Each letter defines a new stage, which can be used to build the rocket. Each stage can be used at most once.


// Output
// Print a single integer — the minimal total weight of the rocket or -1, if it is impossible to build the rocket at all.


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n_letras, n_estagios;
    cin >> n_letras >> n_estagios;

    string palavra;
    cin >> palavra;

    sort(palavra.begin(), palavra.end());
    int contador = 1;

    int resultado = palavra.at(0) - 96;
    char caractere = palavra.at(0);

    for(int i=1; i<n_letras-1; i++) {
        if(contador == n_estagios)
            break;

        if((palavra.at(i) - caractere) > 1) {
            ++contador;
            resultado += (palavra.at(i) - 96);
            caractere = palavra.at(i);
        }
    }

    if(contador != n_estagios && (palavra.at(n_letras-1)-palavra.at(n_letras-2)) > 1) {
        ++contador;
        resultado += palavra.at(n_letras-1) - 96;
    }

    if(contador != n_estagios)
        resultado = -1;

    cout << resultado << "\n";
}