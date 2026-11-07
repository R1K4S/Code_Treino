#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool quadPerf(int i){
    if(i<0) return false;
    int a = sqrt(i);
    return(a*a==i)? 1:0;
}
void solve(){
    int t,a;
    cin >> t;
    vector<int> vet(t);
    for(int i = 0;i<t;i++){
        cin >> vet[i];
    }
    sort(vet.begin(),vet.end());
    for(int i = t-1;i>=0;i--){
        if(!quadPerf(vet[i])){
            cout << vet[i] << "\n";
            return;
        }
    }
}
int main(){
    solve();
    return 0;
}
