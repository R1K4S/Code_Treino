#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main (){
    long long soma,pares;
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin >> v.emplace_back();
    }
    vector<int> dobro(v.size());
    soma = accumulate(v.begin(),v.end(),0LL);
    cout << soma <<"\n";
    pares = count_if(v.begin(),v.end(),[](int x){return x%2==0;});
    cout << pares <<"\n";
    cout << (all_of(v.begin(),v.end(),[](int x){return x>0;})?"sim\n":"nao\n");
    return 0;
}
