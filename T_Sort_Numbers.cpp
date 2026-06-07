#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A,B,C;
    cin >> A >> B >> C;
    if(A>B && A>C)
    {
        if(B>C)
        {
            cout << C << endl << B << endl << A << endl << endl << A << endl << B << endl << C << endl;
        }
        else 
        {
            cout << B << endl << C << endl << A << endl << endl << A << endl << B << endl << C << endl;
        }
    }
    else if(B>A && B>C)
    {
        if(A>C)
        {
            cout << C << endl << A << endl << B << endl << endl << A << endl << B << endl << C << endl;
        }
        else 
        {
            cout << A << endl << C << endl << B << endl << endl << A << endl << B << endl << C << endl;
        }
    }
    else if(C>A && C>B)
    {
        if(A>B)
        {
            cout << B << endl << A << endl << C << endl << endl << A << endl << B << endl << C << endl;
        }
        else 
        {
            cout << A << endl << B << endl << C << endl << endl << A << endl << B << endl << C << endl;
        }
    }
    else
    {
        if(A==B)
            cout << C << endl << A << endl << A << endl << endl << A << endl << B << endl << C << endl;
        else if(B==C)
            cout << A << endl << B << endl << C << endl << endl << A << endl << B << endl << C << endl;
        else
            cout << B << endl << A << endl << C << endl << endl << A << endl << B << endl << C << endl;
    }
    return 0;
}
