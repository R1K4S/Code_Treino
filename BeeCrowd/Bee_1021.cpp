#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double din=0;
    int notas=0;
    cin >> din;
    cout << "NOTAS:\n";
    notas = din/100;
    cout << notas << " nota(s) de R$ 100.00\n";
    din -=(notas * 100);
    notas = din/50;
    cout << notas << " nota(s) de R$ 50.00\n";
    din -= (notas * 50);
    notas = din/20;
    cout << notas << " nota(s) de R$ 20.00\n";
    din -= notas * 20;
    notas = din/10;
    cout << notas << " nota(s) de R$ 10.00\n";
    din = din -(notas * 10);
    notas = din/5;
    cout << notas << " nota(s) de R$ 5.00\n";
    din = din -(notas * 5);
    notas = din/2;
    cout << notas << " nota(s) de R$ 2.00\n";
    din = din -(notas * 2);
    cout << "MOEDAS:\n";
    notas = din/1;
    cout << notas << " moeda(s) de R$ 1.00\n";
    din = din -(notas * 1);
    notas = din/0.5;
    cout << notas << " moeda(s) de R$ 0.50\n";
    din = din -(notas * 0.5);
    notas = din/0.25;
    cout << notas << " moeda(s) de R$ 0.25\n";
    din = din -(notas * 0.25);
    notas = din/0.10;
    cout << notas << " moeda(s) de R$ 0.10\n";
    din = din -(notas * 0.10);
    notas = din/0.05;
    cout << notas << " moeda(s) de R$ 0.05\n";
    din = din -(notas * 0.05);
    notas = din/0.01 + 0.001;
    cout << notas << " moeda(s) de R$ 0.01\n";
    return 0;
}