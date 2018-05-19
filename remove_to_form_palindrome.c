#include<stdio.h>
#include<string.h>
int max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	return y;
}
int longest_palindrome(char *s,int i,int j)
{
	if(i==j)
	{
		return 1;
	}
	if(s[i]==s[j] && i+1==j)
	{
		return 2;
	}
	if(s[i]==s[j])
	{
		return longest_palindrome(s,i+1,j-1)+2;
	}
	return max(longest_palindrome(s,i+1,j), longest_palindrome(s,i,j-1));
	
}
int main()
{
	char s[100];
	int l,ans;
	scanf("%s",s);
	l=strlen(s);
	ans=longest_palindrome(s,0,l-1);
	printf("%d ",abs(ans-l));
}
