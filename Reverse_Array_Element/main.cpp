#include <iostream>
#include<algorithm>

using namespace std;

int main()
{

   ///Using reverse()
   int g[] ={1,2,3,4,5,6};
    int len= sizeof(g)/sizeof(g[0]);

      cout<<"Before Reverse: ";
       for(int i=0; i<len ;i++)
    {
        cout<<g[i]<<" ";
    }
   reverse(g,g+len);  /// Must Include "algorithm"

     cout<<"\nAfter Reverse: ";
    for(int i=0; i<len ;i++)
    {
        cout<<g[i]<<" ";
    }
    //------------------//

    int g2[len];

        for(int i=0; i<len ;i++)
    {
        g2[len-1-i]=g[i];
    }

     cout<<"\nReverse Again: ";
    for(int i=0; i<len ;i++)
    {
        cout<<g2[i]<<" ";
    }

    //------------//
    ///Passed technique by me done below:
/*
    for (int i= len-1,j=0; i>-1, j<len; i--,j++)
    {
          g2[i]=g[j];
    }

     cout<<"\nReverse Again: ";
    for(int i=0; i<len ;i++)
    {
        cout<<g2[i]<<" ";
    }
*/

       ///Passed technique by me done below without using second array:
 /*   int temp;
    for (int i= len-1,j=0; j<len/2; i--,j++)
    {
          temp=g[j];
          g[j]=g[i];
          g[i]=temp;
    }

     cout<<"\nReverse Again: ";
    for(int i=0; i<len ;i++)
    {
        cout<<g[i]<<" ";
    }
*/
     ///Later have to try reverse using Stack, recursion, in place
    return 0;
}
