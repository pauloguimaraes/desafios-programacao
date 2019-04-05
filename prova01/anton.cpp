// Problema G: Anton and Letters
// Link: https://vjudge.net/contest/291554#problem/G

// Status: PASSING

// Input
// The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

// Output
// Print a single number — the number of distinct letters in Anton's set.


#include <iostream>
#include <set>

using namespace std;

int main() {
    string linha = "";

    getline(cin, linha);

    set<char> conjunto;

    for(int i=0; i<linha.length(); i++) {
        if(linha.at(i) == '{' || linha.at(i) == '}' || linha.at(i) == ' ' || linha.at(i) == ',')
            continue;
        conjunto.insert(linha.at(i));
    }

    cout << conjunto.size() << endl;
}