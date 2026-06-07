#include <bits/stdc++.h>
using namespace std;

int main() 
{
    char X;
    cin >> X;
    if(X >= 'a' && X <= 'z')
        cout << (char)toupper(X) << endl;
    else
        cout << (char)tolower(X) << endl;    
    return 0;
}
