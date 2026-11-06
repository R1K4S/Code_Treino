#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double pi=3.14159,raio,vol;
    cin >> raio;
    vol = raio*raio*raio*pi*4/3.0;
    cout << "VOLUME = " << vol << "\n";
    return 0;
}