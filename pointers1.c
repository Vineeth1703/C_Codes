//c program to calculate sum ofelements udin gpoi
#include<stdio.h>
int main()
{
 
 int a[10];
int *ptr=a;
int i,sum1=0,sum2=0,sum3=0,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("array:\n");
for(i=0;i<n;i++)
{   
    printf("%d\n",*(ptr+i));
   sum3+=*(ptr+i); 
}printf("sum:%d\n",sum3);
printf("array:\n");
for(i=0;i<n;i++)
{   
    printf("%d\n",ptr[i]);
   sum2+=ptr[i]; 
}
printf("sum:%d\n",sum2);
printf("array:\n");
for(i=0;i<n;i++)
{   
    printf("%d\n",*ptr);
   sum1+=*ptr; 
   ptr++;
}

printf("sum:%d\n",sum1);
}