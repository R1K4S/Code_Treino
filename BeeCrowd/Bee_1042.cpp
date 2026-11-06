#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vet[3],vetb[3];
    int n = sizeof(vet)/sizeof(vet[0]);
    cin >> vet[0] >> vet[1] >> vet[2];
    for (int i = 0; i < n; ++i)
        vetb[i] = vet[i];
    sort(vet,vet+n);
    for (int i = 0; i < n; ++i)
        cout << vet[i] << endl;
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << vetb[i] << endl;

    return 0;
}