#include<stdio.h>
#include<conio.h>
main()
{
int a[10],n,i,j,swap;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
swap=a[j];
a[j]=a[j+1];
a[j+1]=swap;
}
}
}
printf("Sorted array in ascending order\n");
for(i=0;i<n;i++)
printf("%d \n",a[i]);
getch();
return 0;
}
