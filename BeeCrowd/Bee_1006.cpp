#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(1);
   double a=0,b=0,c=0,media;
   cin >> a >> b >> c;
   media = (a*2)+(b*3)+(c*5);
   media/=10;
   cout << "MEDIA = " << media << "\n";
}