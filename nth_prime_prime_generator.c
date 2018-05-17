#include<stdio.h>
int prime(int n)
{
	int count=1,pr[1000],flag=0,pri,pr_it=0,i=0;
	pr[0]=2,pri=2;
	while(count<=n)
	{
		pri++,flag=0;
		for(i=0;i<=pr_it;i++)
		{
			if(pri%pr[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			pr[++pr_it]=pri;
			count++;
		}
	}
	return pr[--pr_it];
}
int main()
{
	int n,a[100],i,m,ind;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	ind=prime(m);
	ind--;
	if(ind>=n)
	{
		printf("out_of_bound");
	}
	else
	{
		printf("%d ",a[ind]);
	}
}
