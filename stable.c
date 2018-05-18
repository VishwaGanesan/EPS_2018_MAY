#include<stdio.h>
int main()
{
	int n,i,a[100],flag,j,count;
	int ele,map[10]={0},tri;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		ele=a[i],flag=0;
        tri=ele%10;
		while(ele>0)
		{
			map[ele%10]++;
			ele/=10;
		}
		count=map[tri];
		for(j=0;j<=9;j++)
		{
			if(map[j]!=0 && map[j]!=count)
			{
				flag=1;
			}
			map[j]=0;
		}
		if(flag==0)
		{
			printf("%d:STABLE\n",a[i]);
		}
		else
		{	
			printf("%d:UNSTABLE\n",a[i]);
		}
	}
}
