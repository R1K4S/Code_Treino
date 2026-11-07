#include <iostream>
using namespace std;

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if (A == C & B == D)
    {
        cout << 0 << endl;
    }
    else if (A != C & B != D)
    {
         cout << 1 << endl;
    }
    else if (A == C & B != D)
    {
         cout << 2 << endl;
    }
    else if (A != C & B == D)
    {
         cout << 1 << endl;
    }
}
