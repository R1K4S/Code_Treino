#include <bits/stdc++.h>
using namespace std;
void solve(){
    int sum=0;
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        if(s[i]!='0') sum++;
    }
    cout << sum << "\n";
    for(int i = 0;i<s.size();i++){
        if(s[i]!='0'){//s[0]=5
            cout << s[i ];//5
            for (int j = s.size()-i;j>=2;j--) cout << '0';
            //s[0]=5.i=0,j=3
            cout << " ";
        }
    }
    cout << "\n";
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
