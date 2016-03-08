#include<iostream.h>
#include<string.h>
#include<conio.h>
void func(char a[10],int c,char b[10],int d);
void main()
{
char a[10],b[10];
int c,d,i,j,e,f,dif;
cout<<"enter 2 strings : " ;
cin>>a>>b;
c=strlen(a);
d=strlen(b);
for(i=0,j=0;i<c&&j<d;i++,j++)
{
if(a[i]!=b[i])
{
e=a[i];
f=b[i];
if(e>f)
dif=e-f;
else
dif=f-e;
cout<<"\n"<<dif;
}
}
getch();
}