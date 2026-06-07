#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int A,B,C;
    char S,Q='=';
    cin >> A >> S >> B >> Q >> C;
    if((S == '+' && A+B == C) || (S == '-' && A-B == C) || (S == '*' && A*B == C))
        cout << "Yes\n";
    else if(S == '+' && A+B != C)
        cout << A+B << endl;
    else if(S == '-' && A-B != C)
        cout << A-B << endl;
    else 
        cout << A*B << endl;
    return 0;
}
