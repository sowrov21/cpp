#include <iostream>

using namespace std;

int main()
{
    /// Fibonacci Series : 0 1 1 2 3 5 8 13 21 34....
    int len;
    cout<<"Enter Number of term: ";
    cin>>len;
    int F[len];
    F[0]=0;
    F[1]=1;

    for(int i=2; i<len;i++)
    {
        F[i] =F[i-2]+F[i-1] ;                        ///F[0,1,2,3..len] =F[2-2]+F[2-1]
    }
    cout<<"Fibonacci Series for "<<len<<": ";
    for(int i=0; i<len;i++)
    {
       cout<< F[i]<<" ";
    }
    return 0;
}
