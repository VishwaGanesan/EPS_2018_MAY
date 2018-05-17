#include<stdio.h>
void sort(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];	
				a[j]=temp;
			}
		}
	}
}
int main()
{
    int a[100],n,i,j,pos=0;
	int ik,jk;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			pos=i;
			break;
		}
	}
	ik=pos,jk=pos;
	while(jk>=0 && ik<n)
	{
		if(a[ik]+a[jk]==0)
		{
			printf("%d %d ",a[ik],a[jk]);
			ik++,jk--;
		}
		if(a[ik]+a[jk]>0)
		{
			jk--;
		}
		if(a[ik]+a[jk]<0)
		{
			ik++;
		}
	}
}
