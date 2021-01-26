
#include <iostream>
#include <string>
#include<conio.h>

using namespace std;


int main()
{

  char str[10];int _count=0;
 /* int a=0;
  while(a<10)
  {
      cin>>str[a];
      a++;
  }
*/
gets(str);
  for(int i=0; str[i]!='\0'; i++)
  {
      cout<<str[i];
      cout<<_count++;
  }

    return 0;
}
