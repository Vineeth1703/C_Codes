#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
int n,*a='\0',*b='\0',sum=0,x;
printf("enter size of first array:\n");
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);
for(int i=0;i<n;scanf("%d\n",&a[i]),i++);

printf(" size of second array is %d",a[n-1]);
b=(int*)malloc(sizeof(int)*(a[n-1]));
for(int i=0;i<a[n-1];b[i]=i,i++);

for(i=0;i<a[n-1];i++)
{
printf("%d\n",b[i]);
  
}






free(a);
free(b);

}