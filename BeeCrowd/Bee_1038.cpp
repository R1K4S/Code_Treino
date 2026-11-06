
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0,q =0;
    float r = 0;
        cin >> n >> q;
        if(n == 1){
            r = 4;
        }
        else if(n == 2){
            r = 4.5;
        }
        else if(n == 3){
            r = 5;
        }
        else if(n == 4){
            r = 2;
        }
        else if(n == 5){
            r = 1.5;
    }
    cout << fixed << setprecision(2) << "Total: R$ " << r*q << endl;
    return 0;
}