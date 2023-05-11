#include<stdio.h>
int main()
{
	printf("请选择一种饮料！\n");
	int choice;
	scanf("%d",&choice);
	
	printf("1.coffe\n");
	printf("2.tea\n");
	printf("3.kele\n");
	
	switch(choice){
		case 1:
			printf("you chose cofee\n");
			break;
			
		case 2:
			printf("you chose tea\n");
			break;
			
		case 3:
			printf("you chose kele\n");
			break;
		default :
			printf("you chose wrong\n");
			break;
				}
}
	
	
	
 
