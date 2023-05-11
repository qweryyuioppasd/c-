#include<stdio.h>
void move(char a,char c);
void hanni(int n,char a,char b,char c);
int main()
{
	int n;
	scanf("%d",&n);
	hanni(n,'a','b','c');
	return 0;
}

void move(char a,char c)
{
	printf("%c--->%c\n",a,c);
}

void hanni(int n,char a,char b,char c)
{
	if(n==1)
	{
		move(a,c);
	}
	else
	{
		hanni(n-1,a,c,b);
		move(a,c);
		hanni(n-1,b,a,c);
	}
}
