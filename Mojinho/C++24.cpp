#include <bits/stdc++.h>
using namespace std;

template <class T>
class Pilha {
    vector <T> dados;
    public:
    void push(const T& x){dados.push_back(x);}
    T pop() {T x = dados.back();dados.pop_back();return x;}
    T topo() const {return dados.back();}
    bool vazia () const {return dados.empty();}
};
int main(){
    int n,x;
    string s;
    cin >> n;
    Pilha<int> p;
    while (n--) {
        cin >> s;
        if(s=="vazia"){
            cout << (p.vazia()? "sim\n":"nao\n");
        }else if (s=="pop"&&!p.vazia()) {
            cout << p.pop() << "\n";
        }else if (s=="topo"&&!p.vazia()) {
            cout << p.topo() <<"\n";
        }else if (s=="push") {
           cin >> x;
           p.push(x);
        }
    }
}
