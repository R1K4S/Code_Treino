#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long a=1,b=n,ma=a,mb=b;
    for(long long i=1;(i<=n)&&(a<=b);i++){
        if((n%i==0)){
            a=i;
            b=n/i;
        };
        if(((mb-ma)>(b-a))&&(a<=b)){
            ma=a;
            mb=b;
        }
    }
    cout << ma << " " << mb <<"\n";
}
int main(){
    solve();
    return 0;
}
