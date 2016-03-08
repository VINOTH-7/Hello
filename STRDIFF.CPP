#include<iostream.h>
#include<string.h>
#include<conio.h>
void func(char a[10],int c,char b[10],int d);
void main()
{
char a[10],b[10];
int c,d,comp;
cout<<"enter 2 strings : " ;
cin>>a>>b;
c=strlen(a);
d=strlen(b);
func(a,c,b,d);
getch();
}
void func(char a[10],int c,char b[10],int d)
{
int i,j,k,l,diff,count;
for(i=0,j=0;i<c&&j<d;i++,j++)
{ count=0;
if(a[i]!=b[i])
{
k=a[i];
l=b[i];
if(k>l)
diff=k-l;
else
diff=l-k;
switch(i)
{
case 0: cout<<++i<<"st";
break;
case 1: cout<<++i<<"nd";
break;
case 2: cout<<++i<<"rd";
break;
default: cout<<++i<<"th";
break;
}
cout<<" letter differs and the difference is "<<diff;
count++;
break;      }
for(;count==1;)
break;       }
if(count==0)
cout<<"\n the given strings are same...";
}