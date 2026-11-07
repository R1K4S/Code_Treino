#include <bits/stdc++.h>
using namespace std;
class Animal{
    string n;
    public:
        Animal(const string& nome) : n(nome){}
        string nome() const {return n;}
};
class Cao : public Animal{
    public:
         Cao(const string& nome) : Animal(nome){}
         string som() const {return "Au au";}
};
int main(){
    int n;
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        Cao c(s);
        cout << c.nome() << " faz " << c.som() << "\n";
    }
}
