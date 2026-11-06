#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(5);
   double a=0,b=0,media;
   cin >> a >> b;
   media = (a*3.5)+(b*7.5);
   media/=11;
   cout << "MEDIA = " << media << "\n";
}