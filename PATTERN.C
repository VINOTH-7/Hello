#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,k=0;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{ k++;
printf("%d\t",k);  }
printf("\n");
}
getch();
}