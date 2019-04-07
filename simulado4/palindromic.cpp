// Problema B: Palindromic Twist
// Link: https://vjudge.net/contest/293212#problem/B

// Status: PASSING

// Input
// The first line contains a single integer T (1≤T≤50) — the number of strings in a testcase.
// Then 2T lines follow — lines (2i−1) and 2i of them describe the i-th string. The first line of the pair contains a single integer n (2≤n≤100, n is even) — the length of the corresponding string. The second line of the pair contains a string s, consisting of n lowercase Latin letters.

// Output
// Print T lines. The i-th line should contain the answer to the i-th string of the input. Print "YES" if it's possible to make the i-th string a palindrome by applying the aforementioned changes to every position. Print "NO" otherwise.


#include <iostream>

using namespace std;

int main() {
    int qtd_palavras = 0;
    cin >> qtd_palavras;

    int vetor[qtd_palavras];

    for(int i=0; i<qtd_palavras; i++) {
        int n_letras = 0;
        cin >> n_letras;

        char palavra[n_letras];

        for(int w=0; w<n_letras; w++)
            cin >> palavra[w];

        vetor[i] = 1;
        for(int y=0; y < n_letras/2; y++) {
            int dif = palavra[y] - palavra[n_letras-1-y];

            if(dif < 0)
                dif *= -1;
                
            if(dif != 0 && dif != 2) {
                vetor[i] = 0; 
                break;
                }
        }   
    }

    for(int i=0; i<qtd_palavras; i++) {
        if(vetor[i] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}