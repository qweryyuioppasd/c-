#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int x,y;
	for(x=1;x<c;x++)
	{
		for(y=1;y<c;y++)
		{
			if(a*x+b*y==c)
			{
				printf("%d*%d+%d*%d=%d\n",a,x,b,y,c);
			}
		}
	}
	return 0;
}
