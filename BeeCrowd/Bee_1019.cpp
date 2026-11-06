#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int h,min,s,total;
    cin >> total;
    h = total / 3600.0;
    cout << h << ":";
    min = total%3600/60.0;
    cout << min << ":";
    s = total%60;
    cout << s << "\n";
  return 0;
}