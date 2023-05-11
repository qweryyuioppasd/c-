#include<stdio.h>
void sort(int a[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int a[21];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
        for(j=0;j<n;j++)
        {
           if(j==0)
          printf("%d",a[0]);
          else
          {
          	printf(" %d",a[j]);
		  }
        }
    printf("\n");
    return 0;
}

void sort(int a[],int n)
{
    int temp;
    int i,j;
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
