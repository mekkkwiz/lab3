#include <iostream>
using namespace std;
int main () 
{
    float x=2,sum=0;
    while(x<=69)
    {
        sum=(1/x)+sum;
        x++;
        
    }
    cout << "sum is = " << sum << " ("<< x << ")";
    //cout << "hello world";
    return 0;
}