// Problema B: MaratonIME rides the university bus
// Link: https://vjudge.net/contest/294826#problem/B

// Status: PASSING

// Input
// The input consist in one line with two integers n and m, the number of institutes and the number of Gi's questions. In the second line there are n integers ai, the number of people waiting for the bus at the ith institute. Then follows m lines with two integers each, li and ri, the first and last institute of Gi's question.
// - 1 ≤ n, m ≤ 10^5
// - 0 ≤ ai ≤ 10^5
// - 1 ≤ li ≤ ri ≤ n

// Output
// Output "Sim" if it is possible to organize all the pairs in a way nobody sits alone or "Nao" otherwise.

#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int institutos[n];
    int anterior = 0;
    for(int i=0; i < n; i++) {
        cin >> institutos[i];
        institutos[i] += anterior;
        anterior = institutos[i];
    }
    
    
    string respostas[m];
    for(int i=0; i < m; i++) {
        int primeiro, segundo;
        cin >> primeiro >> segundo;

        int somatoria = 0;
        if(primeiro == 1 && segundo == m)
            somatoria = institutos[segundo-1];
        else
            somatoria = institutos[segundo-1] - institutos[primeiro-2];

        if(somatoria % 2 == 0)
            respostas[i] = "Sim";
        else
            respostas[i] = "Nao";   
    }

    for(int i=0; i < m; i++)
        cout << respostas[i] << endl;
}