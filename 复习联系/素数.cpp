#include<stdio.h> 
int main()
{
	int a;
	scanf("%d",&a);
	int counter=0;
	int i;
	if(a<=1)
	{
		printf("不是素数\n");
	}
	else if(a==2)
	{
		printf("是素数\n");
	}
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				counter++;
			}
		}
		if(counter==0)
		{
			printf("是素数\n");
		}
		else
		{
			printf("不是素数\n");
		}
	}
	return 0;
}
