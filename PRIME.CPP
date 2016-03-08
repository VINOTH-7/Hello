#include<iostream.h>
#include<conio.h>
void main()
{
int input,flag=0,i;
clrscr();
cout<<"ENTER THE NUMBER: ";
cin>>input;
for(i=1;i<=input;i++)
{
if((input%i)==0)
{
flag++;
}
}
if(flag==2)
cout<<"\nIT IS A PRIME NUMBER";
else
cout<<"\nIT IS NOT A PRIME NUMBER";
getch();
}
