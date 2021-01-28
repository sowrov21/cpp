#include <iostream>

using namespace std;

int main()
{
    ///cout << "Hello world!" << endl;

    /// Array declaration and Print multiple dimension array all elements
/*
    int arr[5]={1,2,3,4,5};
    float arr2[5]={1.5,2.5,3.5,4.5,5.5};
    char arr3[5]={'a','b','c','d','e'};
    string arr4[5]={"Dhaka","Chittagong","Barisal","Sylhet","Khulna"};

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        cout<<arr2[i]<<" ";
        cout<<arr3[i]<<" ";
        cout<<arr4[i]<<" "<<endl;
    }
   //int a,b;
    int arr5[5][5]={{10,100,1000,10000,100000},{20,200,2000,20000,200000},{30,300,3000,30000,300000},{40,400,4000,40000,400000},{50,500,5000,50000,500000}};
    ///5*5=25 data can be stored in arr5 [5][5]
    char arr7[5][5]={{'a','b','c','d','e'},{'f','g','h','i','j'},{'k','l','m','n','o'},{'p','q','r','s','t'},{'u','v','w','x','y'}};

    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            cout<<arr5[a][b]<<" ";;
        }
        cout<<"\n";
    }
        for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            cout<<arr7[a][b]<<" ";
        }
        cout<<"\n";
    }
*/
    ```````````````````````````````````````````````````````````

      ///Array arithmetic operation

      //int arr_1[3]={2,3,4},arr_2[3]={4,3,2},arr_3[3];
      int arr_1[3],arr_2[3],arr_3[3];
     cout<<"Input arr_1[3]"<<endl;
      int ct=0;
      while(ct<3)
      {
         ///cin>>arr_1[ct]>>arr_1[ct]; //Wrong way
         cin>>arr_1[ct];
         ct++;
      }
cout<<"Input arr_2[3]"<<endl;
      int t=0;
      while(t<3)
      {
         ///cin>>arr_1[ct]>>arr_1[ct]; //Wrong way
         cin>>arr_2[t];
         t++;
      }


      int b=0;
      do
      {
          arr_3[b]=arr_1[b]+arr_2[b];
          b++;
      }
      while(b<3);
      cout<<"1D Sum: ";
        for(int b=0;b<3;b++)
        {
            cout<<arr_3[b]<<" ";
        }

    return 0;
}
