#include <bits/stdc++.h>
using namespace std;
template <class T>
T soma(const vector<T>& v){
    T s = T{};
    for(const T& x : v) s += x;
    return s;
}
int main(){
    long long n,a;
    vector<long long> d;
    cin >> n;
    while(n--){
        cin >> a;
        d.push_back(a);
    }
    cout << soma(d)<<"\n";
}
