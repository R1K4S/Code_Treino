#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double km,l,res;
    cin >> km >> l;
    res = km / l;
    cout << res <<  " km/l\n";
    return 0;
}