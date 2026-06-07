#include <iostream>
using namespace std;

int main() 
{
    int X,num;
    cin >> X;
    num = X / 1000;
    if(num % 2 == 0)
        cout << "EVEN" << endl;
    else 
        cout << "ODD" << endl;    
    return 0;
}
