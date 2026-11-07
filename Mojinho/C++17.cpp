#include <bits/stdc++.h>
using namespace std;
class Contador{
    long long a = 0;
    public:
        void inc() {a++;}
        long long valor() const {return a;}
};
int main(){
    int t;
    string s;
    Contador b;
    cin >> t;
    while (t--) {
        cin >> s;
        if(s=="inc"){
            b.inc();
        }else{
            cout << b.valor() << "\n";
        }
    }
}
