#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int maior=0,l=0;
    cin >> s;
    for(char c : s){
        if(c == 'L'){
            l +=1;
        }
        if(c == 'R'){
            l=0;
        }
        maior = max(maior,l);
    }
    cout << maior+1 << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
}
