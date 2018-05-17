#include<stdio.h>
#include<math.h>
int perfect_square(long n)
{
	double a;
	a=sqrt(n);
	if(ceil(a)==floor(a))
	{
		return 1;
	}
	return 0;
}
int isFibbo(int n)
{
	if(perfect_square(5*n*n+4) || perfect_square(5*n*n-4))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(isFibbo(a[i]))
		{
			printf("%d ",a[i]);
		}
	}
}
