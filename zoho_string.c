/* Given two Strings s1 and s2, remove all the characters from s1 which is present in s2.
Input: s1=”expErIence”, s2=”En”
output: s1=”exprIece” */
#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int a[120]={0},i;
	scanf("%s %s",s1,s2);
	for(i=0;s1[i]!='\0';i++)
	{
		a[s1[i]-'A']=1;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		a[s2[i]-'A']=0;
	}
	for(i=0;s1[i]!='\0';i++)
	{
		if(a[s1[i]-'A']==1)
		{
			printf("%c",s1[i]);
		}
	}
}
