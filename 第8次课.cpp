/*
#include<stdio.h> 
int main()
{
	int i,n,sum=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	
	printf("%d",sum);
	return 0;
}*/
/*
 #include<stdio.h>
 int main()
 {
 	int d1=1;
 	int d2=1;
 	int n;
 	int dn;
 	int i;
 	scanf("%d",&n);
 	for(i=3;i<=n;i++){
 		dn=d1+d2;
 		d1=d2;
 		d2=d1;
 		printf(" %d",dn);
	 }
 		
 	return 1;
 }
   #include<stdio.h>
   #include<math.h>
   int main() 
    {
    	double sum=0.0;
    	int i;
    	int n;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++){
    		
    		sum=sum+pow(-1.0,i+1)*1/i;
		}
    	   printf("sum = %lf",sum);
    	   return 0;	
	}*/
	
	#include<stdio.h>
	#include<math.h>
	int main()
	{
		int i=1;
		int n;
		int cj;
		scanf("%d",&n);
		
		do{
			cj=cj*i;
			i++;
		}while(i<=n);
		printf("%d",cj);
	}
	
	
	
	
	
   
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
