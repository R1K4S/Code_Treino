#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    string nome;
    double dinh=0,sala=0,mont=0;
    cin >> nome >> sala >> mont;
    dinh = sala + mont*0.15;
    cout << "TOTAL = R$ " << dinh << "\n";
}