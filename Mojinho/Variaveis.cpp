#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tempo,seg,min,horas;
    cin >> tempo;
    horas = tempo/3600;
    cout << horas << "\n";
    tempo = tempo%3600;
    min = tempo/60;
    cout << min << "\n";
    tempo = tempo%60;
    seg = tempo;
    cout << seg << "\n";
    return 0;
}
