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
		printf("������ѧ�ţ�");
		ret=scanf("%d",&guess);
		while(ret!=1)
		{
			while(getchar()!='\n');
			printf("�뿪ʼ������\n");
			ret=scanf("%d",&guess);
		}
	counter++;	
	if(guess>magic)	
	printf("�´��ˣ�\n");
    else if(guess<magic)		
	printf("��С��!\n");	
    else		
	printf("��ඣ�\n");			
	}while(guess!=magic&&counter<10);
	
	printf("�µĴ���=%d\n",counter);
	return 0;
}












 

