#include <iostream>

using namespace std;
/*
float a,b; char optr;char choose;

int main();

float Operation(float a, float b, char optr)
{


    // a=a;
     //b=b;
    // optr=optr;
     switch(optr)
     {
         case '+' : return a+b;break;
         case '-' : return a-b;break;
         case '*' : return a*b;break;
         case '/' : return a/b;break;
     }
}

void UserInput()
{
    cout<<"Input First Number:"<<endl;
    cin>>a;
    cout<<"Input Second Number:"<<endl;
    cin>>b;
    cout<<"Input Operation ('+' '-' '*' '/'):"<<endl;
    cin>>optr;


    cout<<"Result: "<<Operation(a,b,optr)<<endl;

    cout<<"To continue calculation. Press 'C'. or 'E' to exit "<<endl;
    char choose;
    cin>>choose;
    if(choose=='c' || choose=='C')
    {
        main();
    }
    else if(choose=='E' || choose=='e')
    {
       return; //exit();
    }
    else
    {
       cout<<"Warning ! Wrong input.. "<<endl;
    }
}



int main()
{
    //cout << "Hello world!" << endl;
    UserInput();
    return 0;
}
*/



/*float a,b,res; char optr;char choose;

void Print(float res);
int main();

void Operation(float a, float b, char optr)
{


    // a=a;
     //b=b;
    // optr=optr;
     switch(optr)
     {
         case '+' : res = a+b;Print(res);break;
         case '-' : res = a-b;Print(res);break;
         case '*' : res = a*b;Print(res);break;
         case '/' : res = a/b;Print(res);break;
     }
}

void UserInput()
{
    cout<<"Input First Number:"<<endl;
    cin>>a;
    cout<<"Input Second Number:"<<endl;
    cin>>b;
    cout<<"Input Operation ('+' '-' '*' '/'):"<<endl;
    cin>>optr;

    Operation(a,b,optr);
}

void Print(float res)
{
    cout<<"Result: "<<res<<endl;
    cout<<"To continue calculation. Press 'C'. or 'E' to exit "<<endl;
    char choose;
    cin>>choose;
    if(choose=='c' || choose=='C')
    {
        main();
    }
    else if(choose=='E' || choose=='e')
    {
       return; //exit();
    }
    else
    {
       cout<<"Warning ! Wrong input.. "<<endl;
    }
}


int main()
{
    //cout << "Hello world!" << endl;
    UserInput();
    return 0;
}
*/

/*
int a,b;
//int Addition(int a, int b);
//int Subtruction(int a, int b);


int Addition(int a, int b)
{
    return a+b;
}
int Subtruction(int &a, int &b)
{
    return a-b;
}

int Multiplication(int *x, int *y)
{
    return (*x)*(*y);
}
int main()
{
    //cout << "Hello world!" << endl;
    int num1, num2,*ptr1,*ptr2;
    cout<<"Enter num1, num2:"<<endl;
    cin>>num1>>num2;
    cout<<"Result[Called by Value]: "<<num1<<"+"<<num2<<" = "<<Addition(num1,num2)<<endl;
    ///Call by Value
    cout<<"Result[Called by Reference]: "<<num1<<"-"<<num2<<" = "<<Subtruction(num1,num2)<<endl;
    ///Call by Reference

    ptr1=&num1;
    ptr2=&num2;
    //cout<<"Result[Called by Address/Pointer]: "<<num1<<"*"<<num2<<" = "<<Multiplication(&num1,&num2)<<endl;
    cout<<"Result[Called by Address/Pointer]: "<<num1<<"*"<<num2<<" = "<<Multiplication(ptr1,ptr2)<<endl;
    ///Call by Address/Pointer

    ///To understand more about pointer follow below
    cout<<"\n";
    cout<<"-------------------------------------------"<<endl;
    cout<<"How Pointers or Address works. Shown below: "<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"num1: "<<num1<<endl;
    cout<<"&num1: "<<&num1<<endl;
    cout<<"*ptr1: "<<*ptr1<<endl;
    cout<<"ptr1: "<<ptr1<<endl;
    cout<<"num2: "<<num2<<endl;
    cout<<"&num2: "<<&num2<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;
    cout<<"ptr2: "<<ptr2<<endl;

    return 0;
}
*/


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
