#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,S,Res = -1;
    cin >> N;
    cin >> M;
    cin >> S;
    vector<int> T(M - N +1);
    iota(T.begin(),T.end(),N);
    for (auto i: T)
    {
        int num = i;
        int soma = 0;
        while (num != 0)
        {
            soma += num%10;
            num /= 10;
        }
        if(soma == S)
            Res = i;
        
    }
    cout << Res <<endl;
}
