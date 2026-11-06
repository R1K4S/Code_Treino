#include <iostream>
using namespace std;
int main(){
    int maior=0,n=0,num=0,pos=0;
    while(n++<10){
        cin >> num;
        if(num >= maior){
            maior = num;
            pos = n;
        }
    }
    cout << maior << "\n";
    cout << pos << "\n";
    return 0;
}