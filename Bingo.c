#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int a[100],k,k1,countuser=0,countcomputer=0,search,arr[100][100],user[100][100],count,n,i,j,vc[100],vu[100],hc[100],hu[100];
static int l=-1;
char sugg;
void execuser(int search,int n)
{
printf("\nUser board:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(user[i][j]==search )
{
user[i][j]=-search;
hu[j]++;
vu[i]++;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",user[i][j]);
printf("\n");
}
}
}
}
for(k=0;k<n;k++)
{
if(hu[k]==n)
{
countuser=1;
}
if(vu[k]==n)
{
countuser=1;
}
}
}
void execcomp(int search,int n)
{
printf("\nComputer board:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(arr[i][j]==search )
{
arr[i][j]=-search;
hc[j]++;
vc[i]++;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",arr[i][j]);
printf("\n");
}
}
}
}
for(k=0;k<n;k++)
{
if(hc[k]==n)
{
countcomputer=1;
}
if(vc[k]==n)
{
countcomputer=1;
}
}
if(countuser==1)
printf("\nUser... Won the game...");
if(countcomputer==1)
printf("\nComputer...Won the game...");
}
int main()
{
int r,flag;
//clrscr();
srand(time(NULL));
printf("\nEnter the value of n: ");
scanf("%d",&n);
for(i=0;i<4;i++)
{
vc[i]=0;
hc[i]=0;
vu[i]=0;
hu[i]=0;
}
printf("Generating computer board with random values...\nComputer board\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
int k;
a:
flag=0;
r=rand()%((n*n)+1);
while(r==0)
r=rand()%((n*n)+1);
for(k=0;k<=l;k++)
{
if(a[k]==r)
flag++;
}
if(flag==0)
{
l++;
a[l]=r;
arr[i][j]=r;
printf("%d ",arr[i][j]);
}
else
goto a;
}
printf("\n");
}
printf("\nGenerating user board...\nEnter the values: ");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&user[i][j]);
printf("\nUser board:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",user[i][j]);
printf("\n");
}
for(i=0;i<n;i++)
{ a[i]=0;
}

flag=1;
do{
printf("User's turn...\nEnter the value: ");
fflush(stdin);
scanf("%d",&search);
execuser(search,n);
execcomp(search,n);
goto la;
la:
flag=0;
r=rand()%((n*n)+1);
while(r==0)
r=rand()%((n*n)+1);
for(k=0;k<=l;k++)
{
if(a[k]==r)
flag++;
}
if(flag==0)
{
l++;
a[l]=r;
}
else
goto la;
printf("Computer's turn...\nGenerated random value: %d",r);
execuser(r,n);
execcomp(r,n);
}while(countuser!=1 || countcomputer!=1);
getch();
return 0;
}
