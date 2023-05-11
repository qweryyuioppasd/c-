/*#include<stdio.h>
int main()
{
	int n;
	int i=0;
	int sum=0;
	scanf("%d",&n);
	do
	{
		sum=sum*2+1;
		i++;
	}while(i<n);
	printf("%d",sum);
	return 0;      //汉诺塔问题原始解法 ,迭代算法 
}*/ /*
#include<stdio.h> 
int getNum(int n);
int main()
{
	int n;
	printf("输入数量:");
	scanf("%d",&n);
	getNum(n);
	printf("%d",getNum(n));
	
	return 1;
}

//功能 计算n个盘子移动次数 ，汉诺塔问题，递归算法 
int getNum(int n){
	if(n!=1) {
	
	    return (2*getNum(n-1)+1);  
	}
	else
	{	
		return 1;
	}
}*//*
#include<stdio.h>
int getNum(int n);
int main()
{
	int n;
	int result;
	printf("输入数字:\n");
	scanf("%d",&n);
	result=getNum(n);
	printf("%d",result);	
	return 1;
}
int getNum(int n){
	if(n==1)
	{
		return 1;
	}
   	if(n==2)
	{
		return 1;
	}
	if(n>2)
	{
		return (getNum(n-1)+getNum(n-2));
	}
	return 1;
}*/      //斐波那契数列 
/*  
#include<stdio.h> 
int main()
{
    int jie(int n);	
	int n;
	printf("input number:\n",n);
	scanf("%d",&n);
	long result;
	result=jie(n);
	printf("%d",result);
	return 1;
}
int jie(int m){
	int result1;
	int sum=1;
	int i;
	for(i=1;i<=m;i++)
	{
		sum=sum*i;
	}
	result1=sum;	
	return result1;   //用函数表示阶乘 
}    */



/*
//移动n个盘子，从source到destination,借助assist 
#include<stdio.h>
void moveDisk(int n,char source,char assist,char destination)
{
	if(n>1)
	{
		moveDisk(n-1,source,destination,assist);
		printf("%c>----->%c\n",source,destination);
		moveDisk(n-1,assist,source, destination);
	}
	else
	{
		printf("%c>----->%c\n",source,destination);
	}
}

int main()
{
	int n;
	char source,assist,destination;
	source='A';
	assist='B';
	destination='C';
	
	printf("input num\n");
	scanf("%d",&n);
	moveDisk(n,source,assist,destination);
	return 1;
}*/
#include<stdio.h>
int fun( int num1,int num2);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int result;
	result=fun(a,b);
	printf("%d",result);
	return 1;
}
int fun(int num1,int num2)
{
	int result=num1+num2;
	
	return result;
}







