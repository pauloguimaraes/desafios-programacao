// Problema C: Way Too Long Words
// Link: https://vjudge.net/contest/286965#problem/C

// Status: PASSING

// Input
// The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.


// Output
// Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    
    string palavras[x];
    for(int i = 0; i < x; i++) {
        string palavra;

        cin >> palavra;
        palavras[i] = palavra;
    }

    for(int i=0; i < x; i++) {
        if(palavras[i].length() > 10) {
            cout << palavras[i].at(0) << (palavras[i].length()-2) << palavras[i].at(palavras[i].length()-1) << "\n";
        }
        else {
            cout << palavras[i] << "\n";
        }
    }
}