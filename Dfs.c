#include<stdio.h>
Void dfs(int);
Int g[10][10],visited[10],n;
Void main()
{
    int i,j;
    printf("enter number of vertices:");
    scanf("%d",&n);
    printf("\nenter adjecency matrix of the graph:");
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
	  scanf("%d",&g[i][j]);
    for(i=0;i<n;i++)
	visited[i]=0;
    dfs(0);
    getch();
}
Void dfs(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    for(j=0;j<n;j++)
       if(!visited[j]&&g[i][j]==1)
	    dfs(j);
}
