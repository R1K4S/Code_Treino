#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),[](int a,int b){
        return a>b;
    });
    for(int d : v){
        cout << d << " ";
    }
    cout << "\n";
}
