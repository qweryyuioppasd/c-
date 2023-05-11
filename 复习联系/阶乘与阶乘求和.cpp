#include<stdio.h>      //1 2 6 24
int main()
{
	int a;
	scanf("%d",&a);
	int i;
	int sum=0;
	int p=1;
	for(i=1;i<=a;i++)
	{ 
	p=p*i;
	sum=sum+p;
    } 
	printf("%d",sum); 
	return 0;
 }                                               //½×³ËµÄÇóºÍ 
 
 
 #include<stdio.h>      1 2 6 24 
 int main()
 {
 	int a;
 	scanf("%d",&a);
 	int p=1;
 	int i;
 	for(i=1;i<=a;i++)
 	{
 		p=p*i;
	 }
	 printf("%d",p);
 	return 0;
 }                                               //½×³Ë 
