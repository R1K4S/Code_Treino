#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x,n;
    cin >> n;
    vector<long long> proibidos(n);

    for (long long& x : proibidos) {
        cin >> x;
    }
    sort(proibidos.begin(), proibidos.end());
    while (cin >> x) {
        cout << (binary_search(proibidos.begin(), proibidos.end(), x)?"sim\n":"nao\n");
    }
    return 0;
}
