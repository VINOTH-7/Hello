#include<stdio.h>
#include<conio.h>
int main()
{
int i,N,n,c,j,k,l;
printf("enter a number: ");
scanf("%d",&n);
c=n-1;
for(i=0;i<n;i++)
{
for(j=1;j<=c;j++)
printf("\t");
c--;
for(k=0;k<=i;k++)
l=l+1;
printf("");
printf("\n");
}
N=n;    c=1;
for(i=1;i<n;i++)
{
for(j=1;j<=c;j++)
printf("\t");
c++;
for(k=N-1;k>0;k--)
printf("*\t\t");;
N--;
printf("\n");
}
getch();
return 0;
}