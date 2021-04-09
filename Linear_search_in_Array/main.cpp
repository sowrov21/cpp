#include <iostream>

using namespace std;

int main()
{
    int num,c=0, marks []={50,67,58,88,90,76};
    cout<<"Enter the number to be search: "<<endl;
    cin>>num;
    int num2=num;
    int num3=num;
        for(int i=0; i<6; i++)
    {
        if(marks[i]==num)
        {
            //cout<<"The position of "<<num<<" is "<<c;
            c=i+1;
        }
        else if(num2<marks[i])  /// without using extra variable or if(marks[0]<marks[i])  { marks[0]=marks[i];} print marks[0] out of loop

        {
            num2=marks[i];

        }
        else if(num3>marks[i])
        {
            num3=marks[i];
        }

    }
    cout<<"Largest Element: "<<num2<<endl;
    cout<<"Smallest Element: "<<num3<<endl;
    if (c==0)
    {
      cout<<"The Element of "<<num<<" is not found"<<endl;
    }
    else
    {
        cout<<"The position of "<<num<<" is "<<c;
    }

    return 0;
}
