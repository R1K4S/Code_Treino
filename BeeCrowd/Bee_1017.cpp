#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(3);
    int km,h;
    double gas;
    cin >> h >> km;
    gas = km*h/12.0;
    cout << gas << "\n";
    return 0;
}