#include<stdio.h>

int main()
{
int i,n,j,k=0,l;
scanf("%d",&n);l=n-1;
for(i=0;i<n;i++,l--)
{
for(j=l;j>0;j--)
{ 
printf(" ");
    }
    for(k=-1;k<i;k++)
        printf("#");
printf("\n");
}
return 0;
}
