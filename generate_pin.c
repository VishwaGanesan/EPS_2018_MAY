#include<stdio.h>
int comparator(int a,int b)
{
	if(a>b)
	{
		return 1;
	}
	return 0;
}
int first_second(int *a, int n,int div,int x)
{
	int i,ans=a[0]/div,temp;
	a[0]%=div;
	for(i=1;i<n;i++)
	{
		temp=a[i]/div;
		if(comparator(temp,ans)==x)
		{
			ans=temp;
		}
		a[i]=a[i]%div;
	}
	return ans;
}
int third_fourth(int *a,int n,int div,int x)
{
	int temp,ans1=a[0]/div,ans2,i;
	a[0]%=div;
	for(i=1;i<n;i++)
	{
		temp=a[i]/div;
		if(comparator(temp,ans1)==x)
		{
			ans2=ans1;
			ans1=temp;
		}
		else if(comparator(temp,ans2)==x && comparator(temp,ans1)==!x)
		{
			ans2=temp;
		}
		a[i]%=div;
	}
	return ans2;
}
int main()
{
	int n,a[100],i;
	int f,s,t,fo;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f=first_second(a,n,1000,1);
	s=first_second(a,n,100,0);
	t=third_fourth(a,n,10,1);
	fo=third_fourth(a,n,1,0);
	printf("%d %d %d %d",f,s,t,fo);
}
