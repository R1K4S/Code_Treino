#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    cin >> s2;
    if(s1.find(s2)==std::string::npos){
         cout << -1 << "\n";
    }else{
         cout << s1.find(s2) << "\n";
    }
}
