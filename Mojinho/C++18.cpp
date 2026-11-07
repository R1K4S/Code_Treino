#include <bits/stdc++.h>
using namespace std;
class Retangulo{
    long largura,altura;
    public:
        Retangulo(long l,long a) : largura(l),altura(a){};
        long area() {return largura*altura;};
        long perimetro() {return largura*2 + altura*2;}
};
int main(){
    long a,b;
    cin >> a >> b;
    Retangulo r(a,b);
    cout << r.area() << "\n" << r.perimetro() << "\n";
}
