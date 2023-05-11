#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while(x!=1)
    {
    	if(x%2==0)
    	{
    		printf("%d=%d/2\n",x/2,x);
    		x=x/2;
		}
		else
		{
			printf("%d=%d*3+1\n",x*3+1,x);
			x=x*3+1;
		}
	}
	return 0;
}
    
    
    
    
    
    

