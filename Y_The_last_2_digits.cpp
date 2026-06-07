#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int A,B,C,D,m1,m2,m3,m4,E;
    cin >> A >> B >> C >> D;
    m1 = (A % 100) % 100;
    m2 = (B % 100) % 100;
    m3 = (C % 100) % 100;
    m4 = (D % 100) % 100;

    E = (m1*m2*m3*m4)% 100;  
    if(E==0||E==1||E==2||E==3||E==3||E==4||E==5||E==6||E==7||E==8||E==9)
        cout << 0 << E << endl;
    else 
        cout << E << endl;
    return 0;
}
