#include<stdio.h>
int main()
{
	int n,ik,jk,i,j,a[100][100],temp;
	scanf("%d",&n);
    ik=n-1,jk=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n/2;i++)
	{
		jk=n-1;
		for(j=0;j<n;j++)
		{
			temp=a[i][j];
			a[i][j]=a[ik][jk];
			a[ik][jk]=temp;
			jk--;
		}
		ik--;
	}
	if(n%2==1)
	{
		ik=n/2,i=0,j=n-1;
		while(i<j)
		{
			temp=a[ik][i];
			a[ik][i]=a[ik][j];
			a[ik][j]=temp;
			i++,j--;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}