#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159;
int main(){
    cout << fixed << setprecision(4);
    double r,area;
    cin >> r;
    area = r*r*pi;
    cout << "A=" << area << "\n";
    return 0;
}