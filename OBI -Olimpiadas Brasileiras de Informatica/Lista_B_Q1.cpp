#include <bits/stdc++.h>
using namespace std;

int main(){
     int N,P,M,Veri = 0;
     cin >> N;
     vector<int> T;
     T.resize(N);
     for (int i = 0;i < N;i++)
    {
     cin >> T[i];
    }   
    cin >> P;
    cin >> M;
    for (int i = 0;i < N;i++)
    {
      if (T[i] == 1)
         Veri++;
    } 
    if(Veri == P)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;
}
