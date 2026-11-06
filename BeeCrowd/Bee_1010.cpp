#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    int peca,num;
    double preco=0,mont=0;
    cin >> peca >> num >> preco;
    mont += num *preco;
    cin >> peca >> num >> preco;
    mont += num *preco;
    cout << "VALOR A PAGAR: R$ " << mont << "\n";
}