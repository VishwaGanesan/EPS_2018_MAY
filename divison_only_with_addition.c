#include<stdio.h>
int main()
{
	int dividend,divisor,result;
	int count=0,remainder=0,temp;
	printf("Dividend = ");
	scanf("%d",&dividend);
	printf("\nDivisor = ");
	scanf("%d",&divisor);
	temp=divisor;
	while(divisor<=dividend)
	{
		divisor+=temp;
		printf("%d \n",divisor);
		count++;
	}
  printf("\n result = %d\n",count);
}
