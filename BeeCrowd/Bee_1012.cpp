#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double A,B,C,res;
    cin >> A >> B >> C;
    res = A*C/2;
    cout << "TRIANGULO: " << res << "\n";
    res = C*C*3.14159;
    cout << "CIRCULO: " << res << "\n";
    res = (A+B)*C/2;
    cout << "TRAPEZIO: " << res << "\n";
    res = B*B;
    cout << "QUADRADO: " << res << "\n";
    res = A*B;
    cout << "RETANGULO: " << res << "\n";
    return 0;
}