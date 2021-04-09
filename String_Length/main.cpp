#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    char a[50];
    int i=0;
    while(i<5)
    {
      cin>>a[i];
      i++;
    }

    cout<<"Length: "<<i+1<<endl;
    return 0;
}
