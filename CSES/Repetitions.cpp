#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int sum=0,atual=1;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i+1]==s[i]){
            atual++;
        }else{
            sum = max(atual,sum);
            atual = 1;
        }
    }
    cout << sum << "\n";

}
int main(){
    solve();
}
