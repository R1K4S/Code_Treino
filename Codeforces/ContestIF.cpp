
#include <bits/stdc++.h>
#include <climits>
using namespace std;
void solve(){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    long long dist0=LONG_LONG_MAX,dist5=LONG_LONG_MAX;

    if(s.find('5') != std::string::npos){
        size_t x1 =  s.find('5');
        size_t x2 =  min(s.find('2',x1+1),s.find('7',x1+1));
        if(x2 !=string::npos)dist5 = ((long long)x2 - 1);
    }

    if(s.find('0') != std::string::npos){
        size_t x3 =  s.find('0');
        size_t x4 =  min(s.find('0',x3+1),s.find('5',x3+1));
        if(x4 !=string::npos)dist0 = ((long long)x4 - 1);
    }
    cout << min(dist0,dist5)<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
