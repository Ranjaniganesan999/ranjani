#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
main()
{
char str[15];
int c1=0,c2=0,c3=0;
cout<<"\nEnter any string:";
cin>>str;
for(int i=0;i<strlen(str);i++)
{
if(isalpha(str[i]))
c1+=1;
else if(isdigit(str[i]))
c2+=1;
else 
c3+=1;
}
cout<<"\nNumber of characters:"<<c1;
cout<<"\nNumber of digits:"<<c2;
cout<<"\nNumber of alphanumerals:"<<c3;
}

