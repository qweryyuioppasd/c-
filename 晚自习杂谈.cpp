/**** 
     ��дʱ�䣺20��18 

       ****/ 
 /*    ��һ�⣺�Ƚ��������Ĵ�С���������      
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("���������֣�");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(c>a)
		{
		    printf("%d",c);
		}
		else{
			printf("%d",a);
		}
	}
	
	if(b>a)
	{
		if(c>b)
		{
			printf("%d",c);
		}
		else{
			printf("%d",b);
		}
	}
	   return 0;
	}   
	*/
	/*   �ڶ��� �Ƚ��������Ĵ�С��������� 
	#include<stdio.h>
	int main() 
	{
		int a,b;
		
		printf("���������֣�");
		scanf("%d %d",&a,&b);
		
		if(a>b)
		{
			printf("%d",a);
		}
		else{
			printf("%d",b);
		}
		return 0;
	}*/ 
	
/*  ������ �Ƚ���������С���������	
	#include<stdio.h>
	int main()
	{
		int a,b;
		printf("�������������֣�");   //��ɾ�� 
		scanf("%d %d",&a,&b);
		
		int c;
		
		if(a>b)
		{
			c=a;
			a=b;
			b=c;
			printf("%d %d",a,b);
		}
		else{
			printf("%d %d",a,b);
		}
		return 0;
	} */ 
	/*������ �Ƚ���������С��������� 
	#include<stdio.h>
	int main()
	{
		int a,b;
		int c;
		printf("�������������֣�");
		scanf("%d %d",&a,&b);
		
		if(a>b)
		{
			printf("%d %d",a,b);
		}
		else{
		   c=a;
		   a=b;
		   b=c;
		   printf("%d %d",a,b);
		}
		return 0;
		}*/
	/* ������ 
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
    return 0;
	} 
    #include<stdio.h>
	int main() 
	{
		int a;
	printf("1.code\n");
	printf("2.lele\n");
	printf("3.achlo\n");
	    printf("���ѡ���ǣ�");
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
		}	*/
		
		
		 #include<stdio.h>
		 #include<stdlib.h>
		 #include<conio.h>
		 #include<windows.h> 
		 #define N 50
		 #define M 50
		 void show(char str[][M],int n);
		 void UpdateWithInput(char str[][M]��int n);
		 int main(void) 
{
		 	char str[][M]=
		 	{
		 		" ************ ",
		 		
			 }
			
}
		
		
		
		
		
	
	
	
	
	
	 
