#include<stdio.h>
int mysort(int a[],int n);
int i,j;
void main()
{
  int n;
  int a[n];
  int s[n];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d\n",&a[i]);
  }
   mysort(a,n);
   printf("sorted array elements:\n");
  for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }

}

int mysort(int a[],int n)
{
   for(int i=0;i<n-1;i++)
   {for(int j=0;j<n-i-1;j++)
      {if(a[j]>a[j+1])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

}
