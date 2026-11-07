#include <iostream>
using namespace std;

int main(){
    int N,D,A,P;
    cin >> N;
    cin >> D;
    cin >> A;
    P = ((D-A)%N);
    if(P < 0 ){
        P = P + N; 
    }
    cout << P << endl;
}
