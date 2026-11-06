#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double n1=0,n2=0,n3=0,n4=0,m=0,nE=0;
    cin >> n1 >> n2 >> n3 >> n4;
    m = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    cout <<  "Media: " << m << endl;
    if(m >= 7){
        cout <<  "Aluno aprovado." << endl;
    }
    else if(5 <= m){
        cout <<  "Aluno em exame." << endl;
        cin >> nE;
        cout << "Nota do exame: " << nE << endl;
        m = (m + nE)/2;
        if(m >= 5)
        cout << "Aluno aprovado." << endl << "Media final: " << m << endl;
        else
        cout << "Aluno reprovado." << endl << "Media final: " << m << endl;
    } 
    else if(m < 5){
        cout <<  "Aluno reprovado." << endl;
    }
}