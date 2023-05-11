#include<stdio.h>         // 1 1 2 3 5 8 13
int fib(int n);
int main()
{
	int a;
	scanf("%d",&a);
	int n;
	n=fib(a);
	printf("%d",n);
	return 0;
}
int fib(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
