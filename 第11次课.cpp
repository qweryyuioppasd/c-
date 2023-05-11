/*
#include<stdio.h>
#define Month 12
int main()
{
	int days[Month]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month;
	do{
		scanf("%d",&month);
	}while(month<1||month>12);
	printf("%d",days[Month-1]);
	return 0;
}*/
/*
#include<stdio.h>
void inIArray(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int minvaluePosition(int a[],int n)
{
	int minPos=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]<a[minPos])
		{
			minPos=i;
		}
    }
     return minPos;	
}
int maxvaluePosition(int a[],int n)
{
	int maxPos=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]>a[maxPos])
		{
			maxPos=i;
		}
    }
     return maxPos;	
}
int main()
{
	int a[5];
	int maxPos;
	int minPos;
	inIArray(a,5);
	minPos=minvaluePosition(a,5);
	maxPos=maxvaluePosition(a,5);
	printf(" %d %d",minPos+1,a[minPos]);
	printf(" %d %d",maxPos+1,a[maxPos]);
	return 1;
}*/


void voting(int elevator[],int n)
{
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",&elevator[i]);
	}
}
//m代表选举人10个，n代表候选人3个 ， elevator表选举人，candicate代表候选人 
void countervorting(int elevator[],int candicate[],int m,int n)
{
	int i;
	int j;
	for(i=1;i<=n;i++)
	{           
	//统计当前候选人的票数
	   for(j=0;j<m;j++)
	   {
	        if(elevator[j]==i)
			{
			candicate[i-1]=candicate[i-1]+1;
				}	
    	}
}
}
  





