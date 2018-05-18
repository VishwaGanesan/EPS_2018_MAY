#include<stdio.h>
struct Bill
{
	int n;
	int prices[100];
	float total;
};
void setTotal(struct Bill *b)
{
	int i=0;
	for(i=0;i<b->n;i++)
	{
		b->total+=b->prices[i];
	}
}
int isEligible(struct Bill *b)
{
	if(b->total>2000)
	{
		return 1;
	}
	return 0;
}
int main()
{
	struct Bill bill;
	int i;
	scanf("%d",&bill.n);
	for(i=0;i<bill.n;i++)
	{
		scanf("%d",&bill.prices[i]);
	}
	setTotal(&bill);
	if(isEligible(&bill))
	{
		bill.total+=bill.total*0.10;
	}
	printf("%.2f",bill.total);
}
