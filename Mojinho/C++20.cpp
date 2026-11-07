#include <bits/stdc++.h>
using namespace std;
struct Fracao{
    long den,num;
};
ostream& operator << (ostream& os,const Fracao& f){
    return os << f.den << "/" << f.num;
}
bool operator ==(const Fracao& a, const Fracao& b){
    return (long long)a.num * b.den == (long long)b.num * a.den;
}
int main(){
    long long x,y,d;
    cin >> x >> y;
    d = gcd(x,y);
    x = x/d;
    y = y/d;
    Fracao f1{x,y};
    cin >> x >> y;
    d = gcd(x,y);
    x = x/d;
    y = y/d;
    Fracao f2{x,y};
    cout << f1 << "\n" << f2 << "\n";
    cout << (f1==f2 ? "iguais\n" : "diferentes\n");
}
