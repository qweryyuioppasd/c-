#include<stdio.h> 
int main()
{
	int a;
	scanf("%d",&a);
	int counter=0;
	int i;
	if(a<=1)
	{
		printf("��������\n");
	}
	else if(a==2)
	{
		printf("������\n");
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
			printf("������\n");
		}
		else
		{
			printf("��������\n");
		}
	}
	return 0;
}
