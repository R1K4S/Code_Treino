#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    bool par1,par2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1==x2||y1==y2){
        cout << 1 << " ";
    }else{
        cout << 2 << " ";
    }
    //Casa Pretas
    //Paridades iguais x1 y1
    //Casa Brancas
    //Paridades opostas x2 y2
    // (1,1)(2,2)(3,3)(4,4)...
    // (1,3)(2,4)(3,5)
    if((x1%2==0)&&(y1%2==0)){
        par1 = 1;
    }else{
        par1 = 0;
    }
    if((x2%2==0)&&(y2%2==0)){
        par2 = 1;
    }else{
        par2 = 0;
    }
    if(par1 != par2){
        cout << 0 << " ";
    }else if{

    }
}
