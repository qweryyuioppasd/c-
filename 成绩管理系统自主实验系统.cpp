#include<stdio.h> 
#include<stdlib.h>
int main() 
{
	printf("******************************************************************************************\n");   //ϵͳ��ҳ 
	printf("******************************************************************************************\n");
	printf("************************************��ӭ����ϵͳ��****************************************\n");
	printf("******************************************************************************************\n");
	printf("******************************************************************************************\n");
	printf("**************************************************************����ʯ�ʹ�ѧ����**********\n"); 
	printf("******************************************************************************************\n");
	printf("******************************************************************************************\n");
	system("pause");
	system("cls");
	
	printf("1.��������\n");   //�״�ѡ����� 
	printf("2.�˳�ϵͳ\n");
	int menu_num;
	scanf("%d",&menu_num);
	if(menu_num==2)
	{
		printf("�ɹ��˳���\n");
	}
	else
	{
		printf("�ɹ�����ϵͳ!\n");
		system("pause");
		system("cls");
		
		for(;;)
		{
			printf("1.�޸�ѧ����Ϣ\n");
			printf("2.¼��ѧ����Ϣ\n");
			printf("3.���ѧ����Ϣ\n");
			
		int num2;
		scanf("%d",&num2);	
	    system("pause");
		system("cls");	
		switch(num2)	
			{
				case 1:
					printf("�����޸Ľ���\n");
					printf("������ɣ����ؽ���\n");
					system("pause");
					system("cls");
				    break;
				case 2:
					printf("����¼�����\n");
					    system("pause");
					   	system("cls");
					printf("������ѯ��\n");
					     system("pause");
						 system("cls");
					printf("������ɼ���\n");
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
						  printf("�������貹����\n");
						  system("pause");
				    system("cls");
						  break;
					    case 6:
						case 7:
						  printf("����\n");
						  system("pause");
				    system("cls");
						  break;
			  
						case 8:
						case 9:
						case 10:
						  printf("���㣡\n");
						  system("pause");
				    system("cls");
						  break;
					}    //switch���������� 
				}  // if����������				
				else
				{
					printf("�������\n");
				}
				    printf("������ɣ����ؽ���\n");
				    system("pause");
				    system("cls");
				
				    system("pause");
					system("cls");
					break;
				case 3:
				    printf("��ӳɹ�\n");
					printf("������ɣ����ؽ���\n");	 
					system("pause");
					system("cls");
				    break;		
			}  //��switch���������� 
		
		} //��for����������	
	}	  //��else���������� 
	return 0;
}


