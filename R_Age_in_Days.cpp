#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N,y,m,d,rd;
    cin >> N;
    y=N/365;
    rd=N%365;
    m=rd/30;
    d=rd%30;
    cout << y << " years\n" << m << " months\n" << d << " days\n";
    return 0;
}
