#include <bits/stdc++.h>
using namespace std;
int soma(int a,int b, int c = 0){
    a += b;
    cout << a << "\n";
    return 0;
}
double soma(double c, double d){
    c += d;
    cout << fixed;
    cout.precision(2);
    cout  << c << "\n";
    return 0;
}
void troca(int& a, int& b){
    int troca;
    troca = a;
    a = b;
    b = troca;
    cout << a << " " << b << "\n";
}
int main(){
    int a,b,e,f;
    double c,d;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    soma(a,b);
    soma(c,d);
    troca(e,f);
    return 0;
}
