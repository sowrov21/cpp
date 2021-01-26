#include <iostream>

using namespace std;

int main()
{
    ///cout << "Hello world!" << endl;

    /*int num [5]={1,2,3,4,5};
    int i;
    cout<<"Numbers= ";
    for(i=0;i<5;i++)
    {
       cout<<num[i];
    }*/

   /* int arsize;
    cout<<"Input Array size: ";
    cin>>arsize;
    cout<<"Input Array Element: ";
    int arr[arsize],i;
    for(i=0;i<arsize;++i)
    {
        cin>>arr[i];
    }

    cout<<"Your entered Elements: ";
        for(i=0;i<arsize;i++)
    {
        cout<<arr[i]<<" ";
    }
*/

 /*   int a,b;
    cout<<"Decimal Arithmetic calculator for two numbers\n";
    cout<<"Choose any operation among: + - * / %\n";
    char optr;
    cin>>optr;

    if(optr=='+' || optr=='-' || optr=='*' ||optr=='/' ||optr=='%')
{

    cout<<"First Num: ";
    cin>>a;
     cout<<"Second Num: ";
    cin>>b;

    switch(optr)
    {
        case '+':cout<<"Sum= "<<a+b<<endl;break;
        case '-':cout<<"Sub= "<<a-b<<endl;break;
        case '*':cout<<"Multi= "<<a*b<<endl;break;
        case '/':cout<<"Div= "<<a/b<<endl;break;
        case '%':cout<<"Mod= "<<a%b<<endl;break;
        default :"Wrong ! Choose any operation among: + - * / %\n";break;
    }

}

   else
   {
      cout<<"Wrong ! Choose any operation among: + - * / %\n";
       //cin>>optr;
   }

   cout<<"Enter C to continue:"<<" or "<<"Enter any key to exit the program:";;

   char ch;
   cin>>ch;
   if (ch=='c' || ch=='C')
   {
       main();
   }
   else
   {
       return 0;
   }
*/



   /* arr[5];int a;

   cout<<"enter the characters: \n";

   for(a=0;a<5;a++)
   {
       cin>>arr[a];
   }
   cout<<"Your characters are:\n";
      for(a=0;a<5;a++)
   {
       cout<<arr[a]<<endl;
   }
   */

   //###...Checking Vowel and Consonant from certain characters

   /* char  arr[5];int a; int v_count=0, c_count=0;

   cout<<"enter the characters: \n";

   for(a=0;a<5;a++)
   {
       cin>>arr[a];
   }
   cout<<"Your characters are:\n";
      for(a=0;a<5;a++)
   {
      if(arr[a]=='a' || arr[a]=='e' || arr[a]=='i' ||arr[a]=='o' || arr[a]=='u' ||
         arr[a]=='A' || arr[a]=='E' || arr[a]=='I' ||arr[a]=='O' || arr[a]=='U')

      {
          v_count++;

      }
      else
        {
            c_count++;
        }


       ///cout<<arr[a]<<endl;
   }
    cout<<"Total Vowel: "<<v_count<<endl;
    cout<<"Total Consonant: "<<c_count<<endl;
*/

 /*    string arr[5];int a;

   cout<<"Enter the characters sequence/ string/ word: \n";

   for(a=0;a<=5;a++)
   {
       cin>>arr[a];
   }
   cout<<"Your characters sequence/ string/ word are:\n";
      for(a=0;a<5;a++)
   {
       cout<<arr[a]<<endl;
   }

*/


//###...Checking Vowel, Consonant and space from word and sentence

   /* string arr[5];int a; int v_count=0, c_count=0,s_count=0;

   cout<<"enter the characters: \n";

   for(a=0;a<5;a++)
   {
       cin>>arr[a];
   }
   cout<<"Your characters are:\n";
      for(a=0;a<5;a++)
   {
      if(arr[a]=='a' || arr[a]=='e' || arr[a]=='i' ||arr[a]=='o' || arr[a]=='u' ||
         arr[a]=='A' || arr[a]=='E' || arr[a]=='I' ||arr[a]=='O' || arr[a]=='U')

      {
          v_count++;

      }
      else if(arr[a]==' ')
      {
          s_count++;
      }
      else
        {
            c_count++;
        }


       ///cout<<arr[a]<<endl;
   }
    cout<<"Total Vowel: "<<v_count<<endl;
    cout<<"Total Consonant: "<<c_count<<endl;
    cout<<"Total Space: "<<s_count<<endl;*/



    ///Swap two number using third variable :
/*
    int num1,num2,temp;
    cout<<"First number : ";
    cin>>num1;

    cout<<"Second number : ";
    cin>>num2;
    cout<<"Before Swap: "<<endl;
    cout<<"num1="<<num1<<" "<<"num2="<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;

    cout<<"After Swap: "<<endl;
    cout<<"num1="<<num1<<" "<<"num2="<<num2<<endl;

*/


    ///Swap two number using third variable :
/*
     int num1,num2,temp;
    cout<<"First number : ";
    cin>>num1;

    cout<<"Second number : ";
    cin>>num2;
    cout<<"Before Swap: "<<endl;
    cout<<"num1="<<num1<<" "<<"num2="<<num2<<endl;

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"After Swap: "<<endl;
    cout<<"num1="<<num1<<" "<<"num2="<<num2<<endl;
*/


    ///Finding greater number among three

 /*   int num1,num2,num3;
    cout<<"Enter Three numbers: num1 ,num2, num3"<<endl;
    cin>>num1>>num2>>num3;

   // a >b a>c=a
    //b>a b>c= b
    //c>a c>b= c

    if(num1>num2 && num1>num3){ cout<<"num1 "<<num1<<" is Greater number"<<endl;}

    else if(num2>num1 && num2>num3){ cout<<"num2 "<<num2<<" is Greater number"<<endl;}

    else if(num3>num1 && num3>num2){ cout<<"num3 "<<num3<<" is Greater number"<<endl;}
*/

    ///Finding ASCII value of Input character
/*
    char ch;
    cout<<"Input any key:"<<endl;

    cin>>ch;
     if(ch)
     {
          cout<<ch<<"'s ASCII Value is: "<<int(ch)<<endl;
          main();
     }
*/
     ///ASCII value of capital A to Z

/*     int a;
      cout<<"ASCII value of capital A to Z: "<<endl;

      for(a=65; a<=90; a++)
      {
          cout<<char(a)<<" = "<<a<<endl;
      }
*/

  ///If-Else works as conditional operator
/* int a,b;
  cin>>a>>b;
   a==b ? cout <<a<<" & "<<b<<" Equal !" : cout <<a<<" & "<<b<<" Not Equal!";
*/






  ///Palindrome Number
/*  int num,A,B,C,D;
  cin>>num;


    A=num/100;//5 560%100=60 560/100=5
    B=num%100;//60
    C=B/10; //6
    D=B%10; //0

    cout<<"Palindrome number: "<<D<<C<<A<<endl;
*/



     /// Convert Decimal to Binary

    int num,a,res;
    cout<<"Enter Decimal Number: "<<endl;
    cin>>num;
    for(a=0;a<=5;a++)
    {
        res=num%2;
        cout<<res;
    }

    return 0;
}
