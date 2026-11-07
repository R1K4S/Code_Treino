#include <iostream>
using namespace std;

int main(){
    int M,A,B,C;
    cin >> M;
    cin >> A;
    cin >> B;
    C = M-B-A;
    M = (A > B) ? (A > C ? A : C) : (B > C ? B : C);
    cout << M << endl;
}
