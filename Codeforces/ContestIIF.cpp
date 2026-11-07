#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    long long a,b,atual;
    vector<long long> num;
    cin >> a >> b;
    atual =b;
    num.emplace_back(atual);
    while (atual > a) {
        if(atual%10 == 1){
            atual= atual/10;
        }else if(atual%2 == 0){
            atual= atual/2;
        }else{
            cout << "NO\n";
            return 0;
        }
        num.emplace_back(atual);
    }
    if(a != atual){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    cout << num.size() << "\n";
    reverse(num.begin(),num.end());
    for(long long v : num){
        cout << v << " ";
    }
    cout << "\n";
    return 0;
}
