/*
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
*/

/* void bubble(int score[],
int n);
{
	int i;
	int temp;
	for(i=0;i<n-1;i++)
	{
		if(score[i]>score[i+1])
		{
			temp==score[i];
			score[i]=score[i+1];
			score[i+1]=temp;
		}
	 } 
}

void sort(int score[],int n)
{
	int i,j;
	int temp;
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
*/

#include<stdio.h>
int main(){
	int hole[10],wolfe=0,j;  
	for( j=2;j<500;j++) 
	{
		printf("狼找了第%d个洞\n",wolfe+1);
		wolfe =wolfe+j;
		wolfe %=10; 
		if(hole[wolfe]==0)
		{
			hole[wolfe]=1;
		}
	}
	//经过500次寻找后，值仍然为0的洞，说明没找到 
	for(int i=0;i<10;i++)
	    {	
	     if(hole[i]==0)
		  {	
		printf("兔子可能在第%d洞\n",i+1);
		  } 
		} 
	return 0;
}





