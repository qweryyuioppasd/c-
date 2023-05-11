#include<stdio.h> 
#include<stdlib.h>
int main() 
{
	printf("******************************************************************************************\n");   //系统首页 
	printf("******************************************************************************************\n");
	printf("************************************欢迎进入系统！****************************************\n");
	printf("******************************************************************************************\n");
	printf("******************************************************************************************\n");
	printf("**************************************************************西南石油大学教务处**********\n"); 
	printf("******************************************************************************************\n");
	printf("******************************************************************************************\n");
	system("pause");
	system("cls");
	
	printf("1.继续进入\n");   //首次选择界面 
	printf("2.退出系统\n");
	int menu_num;
	scanf("%d",&menu_num);
	if(menu_num==2)
	{
		printf("成功退出！\n");
	}
	else
	{
		printf("成功进入系统!\n");
		system("pause");
		system("cls");
		
		for(;;)
		{
			printf("1.修改学生信息\n");
			printf("2.录入学生信息\n");
			printf("3.添加学生信息\n");
			
		int num2;
		scanf("%d",&num2);	
	    system("pause");
		system("cls");	
		switch(num2)	
			{
				case 1:
					printf("进入修改界面\n");
					printf("操作完成，返回界面\n");
					system("pause");
					system("cls");
				    break;
				case 2:
					printf("进入录入界面\n");
					    system("pause");
					   	system("cls");
					printf("补考查询器\n");
					     system("pause");
						 system("cls");
					printf("请输入成绩！\n");
					int score;
					scanf("%d",&score);
					int iscore;
					iscore=score/10;
					if(score<=100&&score>=0)
					{
					switch(iscore)
					{
						case 0:
						case 1:
						case 2:
						case 3:	
						case 4:
						case 5:
						  printf("不及格，需补考！\n");
						  system("pause");
				    system("cls");
						  break;
					    case 6:
						case 7:
						  printf("及格！\n");
						  system("pause");
				    system("cls");
						  break;
			  
						case 8:
						case 9:
						case 10:
						  printf("优秀！\n");
						  system("pause");
				    system("cls");
						  break;
					}    //switch函数下括号 
				}  // if函数下括号				
				else
				{
					printf("输入错误！\n");
				}
				    printf("操作完成，返回界面\n");
				    system("pause");
				    system("cls");
				
				    system("pause");
					system("cls");
					break;
				case 3:
				    printf("添加成功\n");
					printf("操作完成，返回界面\n");	 
					system("pause");
					system("cls");
				    break;		
			}  //主switch函数下括号 
		
		} //主for函数下括号	
	}	  //主else函数下括号 
	return 0;
}


