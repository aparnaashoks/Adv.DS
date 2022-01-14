#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i,n,val,pos=-1;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to be found");
scanf("%d",&val);
for(i=0;i<n;i++)
if(val==a[i])
{
pos=i;
printf("The element is found at position %d",pos);
break;
}
if(pos==-1)
printf("The element is not found at position");
getch();
return 0;
}

