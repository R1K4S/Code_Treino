#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int mon,troco,nota;
    cin >> mon;
    cout << mon << "\n";
    nota = mon / 100;
    cout << nota << " nota(s) de R$ 100,00\n";
    mon =  mon % 100;
    nota = mon / 50;
    cout << nota << " nota(s) de R$ 50,00\n";
    mon =  mon % 50;
    nota = mon / 20;
    cout << nota << " nota(s) de R$ 20,00\n";
    mon =  mon % 20;
    nota = mon / 10;
    cout << nota << " nota(s) de R$ 10,00\n";
    mon =  mon % 10;
    nota = mon / 5;
    cout << nota << " nota(s) de R$ 5,00\n";
    mon = mon % 5;
    nota = mon / 2;
    cout << nota << " nota(s) de R$ 2,00\n";
    mon =  mon % 2;
    nota = mon / 1;
    cout << nota << " nota(s) de R$ 1,00\n";
    mon =  mon % 1;
    return 0;
}