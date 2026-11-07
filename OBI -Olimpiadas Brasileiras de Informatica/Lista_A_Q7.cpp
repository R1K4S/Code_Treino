#include <iostream>
using namespace std;

int main(){
    int D,A,N,P;
    cin >> D;
    cin >> A;
    cin >> N;
    if (N == 1 )
    {
        P = (32-N)*(D);
    }
    else if (N <=15)
    {
         P = (32-N)*(D+(N-1)*A);
    }
    else
    {
        P = (32-N)*(D+14*A);
    }
    cout << P << endl;
}
