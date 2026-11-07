#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
const double PI = 3.14159265358979323846;
class Forma{
    public:
        virtual double area() const = 0;
        virtual ~Forma(){}
};
class Circulo : public Forma{
        double r;
    public:
        Circulo(double raio) : r(raio){}
        double area() const override {return PI * r * r;}
};
class Quadrado : public Forma{
        double l;
    public:
        Quadrado(double lado) : l(lado){}
        double area() const override {return l*l;}
};
int main(){
    int n;
    vector<Forma*> formas;
    double soma=0,x;
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        cin >> x;
        if(s == "circulo") formas.push_back(new Circulo(x));
        if(s == "quadrado") formas.push_back(new Quadrado(x));
    }
    for(Forma* f : formas){
        soma += f->area();
    }
    for(Forma* f : formas){
        delete f;
    }
    cout << fixed << setprecision(3) << soma << "\n";
}
