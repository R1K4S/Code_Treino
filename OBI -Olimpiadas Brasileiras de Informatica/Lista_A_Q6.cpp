#include <iostream>
using namespace std;

int main(){
    int V,A,F,P;
    cin >> V;
    cin >> A;
    cin >> F;
    cin >> P;
    if(V < A & V < F & V < P){
        cout << 0 << endl;
    }
     else if(V >= A+F+P){
         cout << 3 << endl;
    }
     else if(V >= A+F || V >= A+P || V >= F+P ){
         cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }
}
