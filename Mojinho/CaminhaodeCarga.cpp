    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        int t,soma=0,n;
        cin >> t;
        while(t--){
            cin >>n;
            soma += n;
        }
        cout << "Carga total: " << soma << " kilogramas\n";
        return 0;
    }
