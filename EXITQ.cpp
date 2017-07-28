#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
main()
{
int i=0;
char s[100];
cout<<"\nEnter the input:";
cin>>s[i];
while(s[i]!='\0')
{
if(s[i]=='Q')
exit(0);
else
{
cin>>s[i+1];
}
i++;
}
}
