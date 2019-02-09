#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int result=n&(n-1);
	if(result==0)
	{
		printf("Power of 2");
	}
	else
	{
		printf("Not power of 2");
	}
}
