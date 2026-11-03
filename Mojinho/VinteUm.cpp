#include <bits/stdc++.h>
using namespace std;
void solve(){
    string cartas;
    int mao = 0,soma;
    for(int i = 1;i<=52;i++){
        soma = 0;
        cin >> cartas;
        if(cartas[0] == 'K' || cartas[0] == 'Q' || cartas[0] == 'T' || cartas[0] == 'J'){
            soma +=10;
        }else if(cartas[0]=='A'){
            soma +=1;
        }else{
            soma += stoi(cartas);
        }
        if(soma + mao <= 21){
            mao+=soma;
        }else{
            break;
        }
    }
    cout << mao << "\n";
}
int main(){
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
