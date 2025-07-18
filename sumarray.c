#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*a='\0',sum=0;
printf("enter size of array:\n");
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);
for(int i=0;i<n;scanf("%d\n",&a[i]),sum+=a[i++]);
printf("sum:%d",sum);
free(a);
return 0;

}