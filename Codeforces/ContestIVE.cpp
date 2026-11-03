#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;

long long menorFatorPrimo(long long n) {
    if (n <= 1) return 1;
    if (n % 2 == 0) return 2;
    for (long long i = 3; i*i <= n ; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}
int solve(){
    long long n,d=3,i=0;
    cin >> n;
    do {
        d = menorFatorPrimo(n);
        if(d==2){
            i += n/d;
            n -= d*(n/d);
        }else {
            n -= d;
            i++;
        }
    }while(n);
    cout << i << endl;
    return 0;
}
int main(){
    solve();
    return 0;
}
