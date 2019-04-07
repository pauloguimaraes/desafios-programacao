// Desafio 3: Repetitions
// Link: https://cses.fi/problemset/task/1069/

// Status: PASSED

// Input
// The only input line contains a string of n characters.

// Output
// Print one integer: the length of the longest repetition.

#include <iostream>

using namespace std;

int main() {
    string str;

    getline(cin, str);

    int maior = 0;
    int atual = 0;
    char carac;
    for(char& c : str) {
        if(carac == c)
            atual += 1;
        else
        {
            if(atual >= maior)
                maior = atual;
            atual = 1;
        }
        carac = c;
    }

    if(atual > maior)
        maior = atual;

    cout << maior;
    cout << "\n";
}