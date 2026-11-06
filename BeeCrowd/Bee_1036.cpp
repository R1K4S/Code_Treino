#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c,resp1,resp2,del;
    cout << fixed << setprecision(5);
    cin >> a >> b >> c;
    del = b*b - 4*a*c;
    if(del >= 0 && a != 0){
        resp1 = (-b - sqrt(del))/(2*a);
        resp2 = (-b + sqrt(del))/(2*a);
        cout << "R1 = " << resp2 << "\n" << "R2 = " << resp1 << "\n";
    }else{
        cout << "Impossivel calcular\n";
    }
    return 0;
}