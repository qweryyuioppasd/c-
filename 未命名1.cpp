/* 第六题 
#include<stdio.h>
int main()
{
    int grade,numbers;
    float money;
    scanf("%d%d",&grade,&numbers);
    
    switch(grade)
    {
        case 1: money=5.50*numbers ;
		printf("%.2f\n",money);break;
        case 2:money=5.50*numbers;
		 printf("%.2f\n",money);break;
            case 3:money=5.50*numbers;
			 printf("%.2f\n",money);break;
            case 4:money=5.50*numbers;
			 printf("%.2f\n",money);break;
      }
    
    if(((grade<=0||grade>=5)||numbers<0))
    {
        printf("Data Error!\n");
    }
    return 0;} */
    #include<stdio.h>
	int main() 
	{
		int a;
	printf("1.code\n");
	printf("2.lele\n");
	printf("3.achlo\n");
	    printf("你的选择是：");
		scanf("%d",&a);
	switch(a)
	    {
		case 1:
		printf("you chose code\n");
		break;
		
		case 2:
		printf("you chose lele\n");
		break;
		
		case 3:
		printf("you chose achlo\n");
		break;	}
			
		
		return 0;
		
		
	}
 
