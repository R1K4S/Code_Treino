#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(){
    int n,a,i,t1=0,t2=0,soma=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        soma += 0;
        if(a==1){
            t1++;
        }else{
            t2++;
        }
    }
    t1%=2;
    t2%=2;
    if(soma^2){
        if ((t1&&t2)||(!t1 && t2)||(|))
    }else{
        cout<< "NO" << "\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
};
