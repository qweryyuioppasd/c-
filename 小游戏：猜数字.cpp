#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main() 
{
	int magic,guess,counter=0;
	int ret;
	srand(time(NULL)); 
	magic=rand() %29+1;
	do
	{
		printf("请输入学号：");
		ret=scanf("%d",&guess);
		while(ret!=1)
		{
			while(getchar()!='\n');
			printf("请开始操作！\n");
			ret=scanf("%d",&guess);
		}
	counter++;	
	if(guess>magic)	
	printf("猜大了！\n");
    else if(guess<magic)		
	printf("猜小了!\n");	
    else		
	printf("对喽！\n");			
	}while(guess!=magic&&counter<10);
	
	printf("猜的次数=%d\n",counter);
	return 0;
}












 

