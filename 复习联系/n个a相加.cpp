#include<stdio.h>
#include<math.h>
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	int i;
	int sum=0;
	int num=0;
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			num=a*pow(10,j-1)+num;
		}
		sum=sum+num;
		num=0;
	}
	printf("%d",sum);
	return 0;
}
