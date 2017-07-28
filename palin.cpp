#include<iostream>
using namespace std;
main()
{
int a,b1,b2,temp,t;
cout<<"\n Enter a 3-digit number:";
cin>>a;
temp=a;
b1=temp%10;
temp/=10;
b2=temp%10;
temp/=10;
t=(b1*100)+(b2*10)+temp;
if(a==t)
cout<<"\n Number is palindrome!!!";
else
cout<<"\n Number is not palindrome!!!";
}
