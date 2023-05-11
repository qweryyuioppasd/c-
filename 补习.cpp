/* 
#include<stdio.h> 
int main()
{
	int score[10];
	int n;
	scanf("%d",&n);
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
		sum=sum+score[i];
	}
	printf("%d",sum);
	return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int score[5];
	int i;
	int total=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&score[i]);
		total=total+score[i];
	 } 
	 printf("%d",total);
	return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month;
	do
	{
		scanf("%d",&month);
	}while(month<1||month>12);
	printf("is %d",days[month-1]);
	return 0;
}*/
/*
#include<stdio.h> 
#define N 40
int scanf_data(int scsore[]);
void sort_data(int score[],int n);
void prinf_data(int score[],int n);
int main()
{
	int score[N],n;
	n=scanf_data(score);
	sort_data(score,n);
	 prinf_data(score,n);
	 return 0;
}
int scanf_data(int score[])
{
	int i=-1;
	do
	{
		i++;
		scanf("%d",&score[i]);
	}while(score[i]>=0);
	return i;
 } 
 
 void sort_data(int score[],int n)
 {
 	int i,j,temp;
 	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 		   if(score[j]<score[i])
			{
				temp=score[j];
				score[j]=score[i];
				score[i]=temp;
			}	
		 }	
	 }
 }
 
 void prinf_data(int score[],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
 	{
 		printf("%4d",score[i]);
	 }
	 printf("\n");
 }
 *//* 
 #include<stdio.h>
 #define N 40
 int prinf_data(int score[]);
 void sort_data(int score[],int n);
 void scaf_data(int score[],int n);
 int main()
 {
 	int n,score[N];
 	n=prinf_data(score);
 	sort_data(score,n);
 	scaf_data(score,n);
 	return 0;
 }
 int prinf_data(int score[])
 {
 	int i=-1;
 	do
 	{
 		i++;
 		scanf("%d",&score[i]);
	 }while(score[i]>=0);
	 return i;
	 }	
void sort_data(int score[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
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
void scaf_data(int score[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",score[i]);
	}
	printf("\n");
	 }	 */ 
/*	 
#include<stdio.h>	 
#define N 40
int scafdata(int score[]);
int maxdata(int score[],int n);
int sumdata(int score[],int n);
void sortdata(int score[],int n);
void prinfdata(int score[],int n);
int main()
{
	int score[N];
	int n;
	n=scafdata(score);
	int max;
	max=maxdata(score,n);
	int sum;
	sum=sumdata(score,n);
	double average;
	average=sum/n;
	printf("最高分是 %d\n",max);
	printf("总成绩是 %d\n",sum);
	printf("平均成绩是 %lf\n",average);
	sortdata(score,n);
	printf("成绩排列如下：");
	prinfdata(score,n);
	return 0;
}
int scafdata(int score[])
{
	int i=-1;
	do 
	{
		i++;
		scanf("%d",&score[i]);
	}while(score[i]>0);
	return i;
	 }	 
int maxdata(int score[],int n)
{
	int max,i;
	max=score[0];
	for(i=0;i<n;i++)
	{
		if(score[i]>max)
		{
			max=score[i];
		}
	}
	return max;
	 }	 
int sumdata(int score[],int n)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum=sum+score[i];
	}
	return sum;
	 }	 
void sortdata(int score[],int n)
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
void prinfdata(int score[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",score[i]);
	}
	printf("\n");
	 }	 
*//*
#include<stdio.h> 
int scafdata(int a[]);
int maxdata(int a[],int n);
int sumdata(int a[],int n);
int averagedata(int a[],int n);
void sortdata(int a[],int n);
void prinfdata(int a[],int n);
int main()
{
	int a[40];
	int n;
	n=scafdata(a);
	int max,aver,sum;
	max=maxdata(a,n);
	aver=averagedata(a,n);
	sum=sumdata(a,n);
	sortdata(a,n);
	prinfdata(a,n);
	printf("max=%d\n",max);
	printf("sum=%d\n",sum);
	printf("aver=%d\n",aver);
	return 0;
}

int scafdata(int a[])
{
	int i=-1;
	do
	{
		i++;
		scanf("%d",&a[i]);
	}while(a[i]>0);
	return i;
	 }	 
	 
int maxdata(int a[],int n)
{
	int max;
	int i;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
	 }	
	 
int sumdata(int a[],int n)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum;
	  }	 
	  
int averagedata(int a[],int n)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum/n;
	
	   }
	   
void sortdata(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[j]>a[i])
	 		{
	 			temp=a[j];
	 			a[j]=a[i];
	 			a[i]=temp;
			 }
		 }
	 }
	 	  }	  
			  
void prinfdata(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
					  }			*/ 	   
/*					  
#include<stdio.h>
int main()		
{
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=n;i>=1;i--)
		{
			printf("%4d",a[i]);
		}	
	return 0;
			  }			  
*/
/* 
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int n;
	gets(a);
	scanf("%d",&n);
	int j;
	for(j=0;j<n;j++)
	{
		printf("%c",a[j]);
	}
	return 0;
}*/
/*
#include<stdio.h> 
#include<string.h>
int main()
{
	char a[20];
	char b[20];
	gets(a);
	gets(b);
	int k;
	k=strcmp(a,b);
	printf("%d",k);
	if(k==0)
	{
		printf("\n",a-b);
	}
	else if(k>0)
	{
		printf("%c",a-b);
	}
	else
	{
		printf("%c",b-a); 
	}
		
	return 0;
}*/
#include<stdio.h>
int main()
{
        int M,N;
        scanf("%d %d",&M,&N);
        int i;
        if(M>=100&&M<=N&&N<=999)
{
	for(i=M;i<=N;i++)
    {
    	int a,b,c;
    	a=i/100;
    	b=(i%100)/10;
    	c=(i%100)%10;
    	if(i==a*a*a+b*b*b+c*c*c)
    	{
    		printf("%d\n",i);
		}
	}
}
else
{
	printf("Invalid Value.\n");
}
   return 0; 
}




					  
					  
