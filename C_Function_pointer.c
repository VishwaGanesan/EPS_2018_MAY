#include <stdio.h>
void printEven(int start,int end)
{
    start=start%2!=0?start+1:start;
    while(start<=end)
    {
    	printf("%d ",start);
    	start+=2;
    }
}
void printOdd(int start,int end)
{
	start=start%2==0?start+1:start;
    while(start<=end)
    {
    	printf("%d ",start);
    	start+=2;
	}
}
void dispatcher(void (*func)(int,int),int start,int end)
{
	func(start,end);
}
int main()
{
	int a,start,end;
	scanf("%d %d %d",&a,&start,&end);
  	void (*fun_ptr)(int,int) = a==1?printOdd:printEven;   // syntax return_type ( * func_ptr ) (paramater) = functionName
 	dispatcher(fun_ptr,start,end);           	
   	//	fun_ptr(start,end);								 				
 	return 0;
}
