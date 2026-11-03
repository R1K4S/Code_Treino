#include <bits/stdc++.h>
using namespace std;
int main(){
    int ano;
    cin >> ano;
    if(!(ano%400)){
        cout << "bissexto\n";
        return 0;
    }
    if(!(ano%4) && (ano%100)){
        cout << "bissexto\n";
        return 0;
    }
    cout << "comum\n";
    return 0;
}
