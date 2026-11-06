#include <iostream>
using namespace std;
int main(){
    int ano,mes,dia,total;
    cin >> total;
    ano = total/365;
    cout << ano << " ano(s)\n";
    mes= total%365/30;
    cout << mes << " mes(es)\n";
    dia = total%365%30;
    cout << dia << " dia(s)\n";
  return 0;
}