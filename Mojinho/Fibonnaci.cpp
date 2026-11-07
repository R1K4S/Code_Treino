#include <bits/stdc++.h>
using namespace std;
long int fibonacci(int n){
    long int i,temp=0,a=0,b=1;
    for(i=1;i<n;i++){
        temp = b;
        b += a;
        a = temp;
    }
    return b;
}
int main(){
    int n;
    cin >> n;
    cout <<"F("<< n << ") = "<<fibonacci(n) << "\n";
}
