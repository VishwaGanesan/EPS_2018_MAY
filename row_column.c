#include<stdio.h>
int main()
{
	int n,i,j,a[100][100],sumr[100]={0},sumc[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			sumr[i]+=a[i][j];
			sumc[j]+=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sumr[i]==sumc[j])
			{
				printf("\nYES\n");
				return;
			}
		}
	}
	printf("NO");
}
