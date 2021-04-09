#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a=2356,last_dgt=0,first_dgt=0,digit=0;
    last_dgt = a%10;

    digit = log10(a);/* Total number of digits - 1 */
    //cout<<digit<<endl;

    int res = a/pow(10,digit); //pow(base,exponent)2^3=8

    cout<<"Last Digit of "<<a<<" is "<<last_dgt<<endl;
    cout<<"First Digit of "<<a<<" is "<<res<<endl;

    return 0;
}
