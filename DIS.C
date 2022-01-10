#include<stdio.h>
#include<conio.h>
#define MAX 50
struct Disjset
{
  int parent[10];
  int rank[10];
  int n;
  }
  dis;
 void makeset()
{
   int i;
   for( i=0;i<dis.n;i++)
{
   dis.parent[i]=i;
   dis.rank[i]=0;
}
}
void displayset()
  {
   int i;
   printf("parent array\n");
   for(i=0;i<dis.n;i++)
   {
   printf("%d",dis.parent[i]);
   }
   printf("Rank array\n");
   for(i=0;i<dis.n;i++)
   {
   printf("%d",dis.rank[i]);
  }
  }
  int find(int x)
  {
   if(dis.parent[x]!=x)
   {
   dis.parent[x]=find(dis.parent[x]);
   }
   return dis.parent[x];
  }
void Union(int x,int y)
   {
   int xset=find(x);
   int yset=find(y);
   if(xset==yset)
   return ;
   if(dis.rank[xset]<dis.rank[yset])
   {
     dis.parent[xset]=yset;
     dis.rank[xset]=-1;
   }
   else if(dis.rank[xset]>dis.rank[yset])
   {
   dis.parent[yset]=xset;
   dis.rank[yset]=-1;
   }
   else
   {
    dis.parent[yset]=xset;
    dis.rank[xset]=dis.rank[xset]+1;
    dis.rank[yset]=-1;
    }
    }
    int main()
    {
     int n,x,y;
     int ch,wish;
     clrscr();
     printf("How many elements?");
     scanf("%d",&dis.n);
     makeset();
     do
     {
      printf("\n-----Menu-------\n");
      printf("\n1.Union \n2.find \n3.Display");
      printf("Enter the choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
	case 1:
	printf("Enter the elements to perform union");
	scanf("%d %d",&x,&y);
	Union(x,y);
	break;
	case 2:
	printf("Enter elements to check if connected components\n");
	scanf("%d %d",&x,&y);
	if(find(x)==find(y))
	printf("Connected components\n");
	break;
	case 3:
	displayset();
	case 4:
	makeset();
	break;
	default:
	printf("Invalid choice");
	}
	printf("\Do you wish to continue(1/0)\n");
	scanf("%d",&wish);
      }
      while(wish==1);
      return 0;
      }











