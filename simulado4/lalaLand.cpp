// Problema C: Lala Land and Apple Trees
// Link: https://vjudge.net/contest/293212#problem/C

// Status: PASSING

// Input
// The first line contains one number n (1 ≤ n ≤ 100), the number of apple trees in Lala Land.
// The following n lines contains two integers each xi, ai (-10^5 ≤ xi ≤ 10^5, xi ≠ 0, 1 ≤ ai ≤ 10^5), representing the position of the i-th tree and number of apples on it.
// It's guaranteed that there is at most one apple tree at each coordinate. It's guaranteed that no tree grows in point 0.

// Output
// Output the maximum number of apples Amr can collect.


#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n_arvores = 0;
    cin >> n_arvores;

    int localizacoes[n_arvores];
    int macas[n_arvores];

    for(int i=0; i<n_arvores; i++)
        cin >> localizacoes[i] >> macas[i];
    
    int qtd_neg = 0;
    int qtd_pos = 0;
    for(int i=0; i<n_arvores; i++) {
        if(localizacoes[i] < 0)
            qtd_neg++;
        else
            qtd_pos++;
    }

    int local_neg[qtd_neg];
    int livre_neg = 0;
    int local_pos[qtd_pos];
    int livre_pos = 0;
    for(int i=0; i<n_arvores; i++) {
        if(localizacoes[i] < 0) {
            local_neg[livre_neg] = localizacoes[i];
            livre_neg++;
        }
        else {
            local_pos[livre_pos] = localizacoes[i];
            livre_pos++;
        }
    }

    int somatoria = 0;
    int dif = qtd_neg - qtd_pos;

    if(dif < 0)
        dif *= -1;
    if(dif <= 1) {
        for(int i=0; i<n_arvores; i++) {
            somatoria += macas[i];
        }
    }
    else if(qtd_neg < qtd_pos) {
        for(int i=0; i<n_arvores; i++) {
            if(localizacoes[i] < 0)
                somatoria += macas[i];
        }

        sort(local_pos, local_pos+qtd_pos);
        for(int i=0; i<qtd_neg+1; i++) {
            for(int y=0; y<n_arvores; y++) {
                if(localizacoes[y] == local_pos[i]) {
                    somatoria += macas[y];
                    break;
                }
            }
        }
    }
    else {
        for(int i=0; i<n_arvores; i++) {
            if(localizacoes[i] > 0)
                somatoria += macas[i];
        }

        sort(local_neg, local_neg+qtd_neg, greater<int>());
        for(int i=0; i<qtd_pos+1; i++) {
            for(int y=0; y<n_arvores; y++) {
                if(localizacoes[y] == local_neg[i]) {
                    somatoria += macas[y];
                    break;
                }
            }
        }
    }

    cout << somatoria << endl;
}