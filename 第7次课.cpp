/******** 
     ���ߴο� 

#include<stdio.h>   //��һ��    ��forѭ����ʹ�� 
int main()
{
	int i;
	int sum=0;
	for(i=1;i<=100;++i)   //������ i++,i=i+1������ 
	{
		sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;
}     *


#include<stdio.h>    //�ڶ���      ��whileѭ����ʹ�� 
int main()
{
	int i=1;
	int sum=0;
	
	while(i<=100)
	{
		sum=sum+i;
		++i;
	}
	printf("%d",sum);
	
	return 0;
}


#include<stdio.h>     //������      ��do-whileѭ����ʹ�� 
int main()
{
	int i;
	int sum=0;
	
	do
	{
		sum=sum+i;
		++i;
	}
	while(i<=100);
	
	printf("%d",sum);
	return 0;
}*/


#include<stdio.h>
int main()
{
	int n;
	scanf("%5d",&n);
	
	while(n!=1)
	{
		
		
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=3*n+1;
		}
		
		
		
	}
	if(n!=1)
	{
	printf("%5d",n);}
	else
	{
		printf("%d");
	}
	
	return 1;
}















