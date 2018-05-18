#include<stdio.h>
int main()
{
	int a,b,c,temp=0;
	scanf("%d %d",&a,&b);
	c=a;
	while(c)
	{
		temp+=b;
		c--;
	}
	printf("%d ",temp);
}
