#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
    int temp;
    int sum=0;
    temp=n;
    int i=0;
    while(temp)
    {
    	sum+=temp%10;
    	temp=temp/10;
    	i++;
	}
	printf("%d %d",i,sum);
	return 0;
 } 
