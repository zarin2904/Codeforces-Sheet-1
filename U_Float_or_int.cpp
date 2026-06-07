#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double N;
    cin >> N;
    if(N  == ceil(N))
        cout << "int " << ceil(N) << endl;
    else 
        cout << "float " << floor(N) << " " << N-floor(N) << endl;
    return 0;
}
