#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> v.emplace_back();
    }
    for(vector<int>::iterator it = v.begin();it != v.end();++it){
        cout << *it << " ";
    }
    cout << "\n";
}
