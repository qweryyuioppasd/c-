/*
    第一步：确定要取的数据123
	第二部：123%10=3
	第三部：确定要取数字的数据 123/10=12
	第四部：12%10=2 
	第五步：确定要取得数据  12/10=1
	第六步：1%10=1
	第七部：1/10=0（数字被取完了的意思） 
	 while(number!=0)
	 {
	    第一步：确定要取的数据123
	第二部：123%10=3
     }*/
     /* 
     #include<stdio.h>
	 int main() 
	 {
	 	int a=21;
	 	int b=10;
	 	int c;
	 	printf("c=%d\n",c);
	 	c=++a;    // a+1赋值给c      a=a+1  c=a 
	 	printf("c=%d\n",c);    // c=a+++3   c=a+3 a=a+1     ++在前先自增再做其他运算    ++在后先做其他运算再自增 
	 	c=--a;   
	 	printf("c=%d\n",c);
	 	
	 }
     
     & | ！        真&真-------真
	               假|假 -------假
				   假-----真  取反 
     */
	    /* 
	     #include<stdio.h>
		 int main() 
	 {
	 	
	 	
	 	int x=3;
	 	int y=4;
	 	(++x==3)&&(y++==4);    //短路与    而且编程都用短路与 
	 	printf("x:%d\n",x);    // ==才是等于什么什么 
	 	printf("y:%d\n",y); 
	 }   */ 
	 
	      #include<stdio.h>
		  int main(void) 
		  {
		  	 int a=1,b=2,c=3;
		  	 float d=10.2f;
		  	 
		  	 a+=1;  //相当于左边加上右边所有值再赋值给左边 
		  	 b-=a+5;
		  	 c*=a-4;
		  	printf("%d,%d,%d",a,b,c,d/=a);
		  	return 0;
		  }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	  
