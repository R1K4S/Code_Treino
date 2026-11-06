#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    int  num=0,h=0;
    double dinh=0,sala=0;
    cin >> num >> h >> dinh;
    sala = h*dinh;
    cout << "NUMBER = " << num << "\n";
    cout << "SALARY = U$ " << sala << "\n";
}