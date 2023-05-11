/*
#include<stdio.h>
void iniRabit(int rabits[],int n);
void findRabit(int rabits[],int n);
void showRabit(int rabits[],int n);
int main()
{
	int rabits[10];
	iniRabit(rabits,10);
	findRabit(rabits,10);
	showRabit(rabits,10);
	return 1;
}
//假定每窝都有兔子 
void iniRabit(int rabits[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		rabits[i]=1; //假定该处有兔子 
		
	}
}


void findRabit(int rabits[],int n)
{
	int iwolfpos=0;
	rabits[0];  
	int i;      //使用0标记此处，即第一个兔子窝，没有兔子 
	int arraypos;
	for(i=1;i<500;i++)
	{
		iwolfpos=iwolfpos+i+1;
		arraypos=iwolfpos%10; //将狼的位置映射为数组的位置 
		rabits[arraypos]=0;
	}
}

void showRabit(int rabits[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(rabits[i]==1)
		{
			printf("%d这里有兔子\n",i+1);
		}
		else
		{
			printf("%d这里没有兔子\n",i+1);
		}
	}
}
*/
/*
//新课，指针
 #include<stdio.h>                       // 对数值交换函数的指针优化方式 
 void swap(int *a,int *b);
  int main()
  {
  	int a,b;
  	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);   
  	return 0;
  }
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}*/

#include<stdio.h> 
#define N 10 
int Readscore(int score[]);
void datasort(int score[],int n);
void printscore(int score[],int n);
int main(void)
{
	int score[N],n;
	n=Readscore(score);
	datasort(score,n);
	printscore(score,n);
	return 0;
}
int Readscore(int score[])                   //输入函数接口 
{
	int i=-1;
	do
	{
		i++;
		scanf("%d\n",&score[i]);
	}while(score[i]>=0);
	return i;
}
void datasort(int score[],int n)             //排序函数接口 
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(score[j]>score[i])
			{
				temp=score[j];
				score[j]=score[i];
				score[i]=temp;
			}
		}
		
	}
}
void printscore(int score[],int n)       //输出函数接口 
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",score[i]);
	}
	printf("\n");
}
  
  
  
  
  
  
  
  
  
  
  







