// Problema A: Little Bear and Five Cards
// Link: https://vjudge.net/contest/288558#problem/E

// Status: PASSING

// Problem
// A little bear Limak plays a game. He has five cards. There is one number written on each card. Each number is a positive integer.
// Limak can discard (throw out) some cards. His goal is to minimize the sum of numbers written on remaining (not discarded) cards.
// He is allowed to at most once discard two or three cards with the same number. Of course, he won't discard cards if it's impossible to choose two or three cards with the same number.
// Given five numbers written on cards, cay you find the minimum sum of numbers on remaining cards?

// Input
// The only line of the input contains five integers t1, t2, t3, t4 and t5 (1 ≤ ti ≤ 100) — numbers written on cards.

// Output
// Print the minimum possible sum of numbers written on remaining cards.


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arranjo[5];

    for(int i=0; i<5; i++)
        cin >> arranjo[i];
    
    sort(arranjo, arranjo+5);

    int somatoria = 0;
    for(int i=0; i<5; i++)
        somatoria += arranjo[i];

    int resposta = somatoria;
    for(int i=0; i<4; i++) {
        int aux;
        
        int contador = 0;
        for(int j=i+1; j<5; j++)
            if(arranjo[i] == arranjo[j])
                contador++;
        
        if(contador > 1)
            aux = somatoria - (3 * arranjo[i]);
        else if(contador == 1)
            aux = somatoria - (2 * arranjo[i]);
        
        if(aux < resposta)
            resposta = aux;
    }

    cout << resposta << "\n";
}