// Problema C: Noldbach Problem
// Link: https://vjudge.net/contest/291554#problem/C

// Status: PASSING

// Input
// The first line of the input contains two integers n (2 ≤ n ≤ 1000) and k (0 ≤ k ≤ 1000).

// Output
// Output YES if at least k prime numbers from 2 to n inclusively can be expressed as it was described above. Otherwise output NO.


#include <iostream>
#include <cmath>

using namespace std;

int primo(int numero) {
    if(numero < 2)
        return 0;
    
    int raiz = sqrt(numero);
    for(int i=2; i<=raiz; i++)
        if(numero % i == 0)
            return 0;
    
    return 1;
}


int main() {
    int primos[1000];
    for(int i=0; i<1000; i++)
        primos[i] = -1;
    int n, k;

    cin >> n >> k;

    int posicao_livre = 0;
    for(int i=0; i<=n; i++)
        if(primo(i) == 1) {
            primos[posicao_livre] = i;
            posicao_livre ++;
        }

    if(posicao_livre == 0) {
        cout << "NO" << endl;
        exit(0);
    }
    
    int qtd = 0;
    int n_primo = sizeof(primos)/sizeof(*primos);

    for(int i=0; i<n_primo-1; i++) {
        if(primos[i+1] <= 0)
            break;

        for(int j=0; j<n_primo; j++)
            if(primos[i]+primos[i+1]+1 == primos[j]) {
                qtd++;
                break;
            }
    }

    if(qtd < k)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
