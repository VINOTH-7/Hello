#include<iostream.h>
#include<conio.h>
void main()
{
long long int num,i,sum=0;
cin>>num;
for(i=0;num!=0;i++)
{
sum=sum+(num%10);
num=num/10;
}
cout<<sum;
getch();
}