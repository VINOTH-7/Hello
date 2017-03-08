#include<stdio.h>
main()
{
int n;
scanf("%d",&n);
int a[n];
int i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int sum = 0;
float avg;

for (i = 0; i < n; i++)
    sum += a[i];

avg = (float)sum / n;
sum = 0;

for (i = 0; i < n - 1; i++) {
    sum += a[i];
    if (avg == (float)sum / (i+1)) {
         printf("Divide @ %d\n", i);
         return;
    }
}

printf("a is not suitable\n");
return;
}
