#include <iostream>



using namespace std;

class Operation
{
   public: void Add(int arr[], int len)
    {
      int i,sum=0;

      for(i=0;i<len;i++)
      {
         sum=sum+arr[i];
      }
      cout<<"Sum: "<<sum<<endl;
    }

    public: void Add(int arr1[], int arr2[])
    {
      int i;
      int len1=Array_Len(arr1);
      cout<<"Len1: "<<len1<<endl;
      int len2=Array_Len(arr2);
     /*  if(len1>=len2)
       {
              int total[len1];
               for(i=0;i<len1;i++)
            {
               total[i]=arr1[i]+arr2[i];
            }
            for(int a=0;a<len1;a++)
            {
                cout<<"Sum: "<<total[a]<<endl;
            }


       }

       else if(len2>=len1)
       {
            int total[len2];
               for(i=0;i<len2;i++)
            {
               total[i]=arr1[i]+arr2[i];
            }
            for(int a=0;a<len2;a++)
            {
                cout<<"Sum: "<<total[a]<<endl;
            }
       }
       */
    }

  public: int Array_Len(int ar[])
    {
       int i,c=0;
       for (i : ar) ///foreach(char ch in myArray) in C#
       {
           c=c+1;
       }
        cout<<"Len: "<<c;
        return c;
    }
};

int main()
{


    int _array[]={1,2,3,4,5,6,7};
    int len= sizeof(_array)/sizeof(_array[0]);
    Operation a;
     a.Add(_array, len);



     int my1[]={1,2,3};
     int my2[]={1,2,3};
     a.Add(my1,my2);


    return 0;
}
