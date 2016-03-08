#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int j,num,a[10],k=0,n,i,m;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
for(j=0;(a[i]!=a[j]?a[i]<a[j]:continue;);j++)
k++;
if(k==0) {
num=a[i];
cout<<num;
}
}
getch();
}