// ×Ö·û´® char c[1]={'h','e'} ;¼´ºóÃæÊÇ¿ÕµÄ\n 
//  arry[6]= ''a,b,c,d,e''(Ô¤Áô¿Õ×Ö·ûµÄÇø¼ä} 
// ×Ö·û´®º¯Êý <string.h> 
/* 
#include<string.h>
#include<stdio.h>
#define N 20
int isUserVaild(char userAcount[],char userPassword[]);
int main()
{
	char userAcount[N];
	char userPassword[N];
	gets(userAcount);
	gets(userPassword);
	if(isUserVaild(userAcount,userPassword)==1)
	{
		printf("ok"); 
	}
	else
	{
		printf("fault"); 
	}
}

int isUserVaild(char userAcount[],char userPassword[])
{
	if(strcmp(userAcount,"xi")==0 && strcmp(userPassword,"12345")==0)
	{
		return 1;
}
	else
	{
		return 0;
	}
}*/

#include<stdio.h> 
#define STAUS int
STATUS myStrcmp(char str1[],char str2[]);
int main()
{
	char str1[100];
	char str2[100];
	scanf("%s",str1);
	getchar();
	scanf("%s",str2);
if(myStrcmp(str1,str2))
{
	printf("==");
}
else 
{
  printf("=!");
}
return 0;
}
STATUS myStrcmp(char str1[],char str2[])
{
	int i=0;
	while(str1[i]==str2[i])
	{
		if(str1[i]=='\0')
		{
			return 0;
		}
		else
		{
			i++;
		}
	}
	
	return str1[i]-str2[i];
}































 
