//add 1 to all elements 
/*#include<stdio.h>
int main()
{
 
 int a[10];
int *ptr=a;
int i,sum1=0,sum2=0,sum3=0,n,x;
printf("enter size of array:\n");
scanf("%d",&n);
printf("xvalue:\n");
scanf("%d",&x);
printf(" enter the array elements:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}


for(i=0;i<n;i++)
{   
    if(ptr[i]%x==0)
    {
       //ptr[i]=ptr[i]+1;
       ++ptr[i];
    }
   
}
printf("new arra:\n");
for(i=0;i<n;i++)
{   
    printf("%d\n",ptr[i]);
   
}

}*/
//add 1 to all elements 
#include<stdio.h>
int main()
{
 
 int a[10];
int *ptr=a;
int i,sum1=0,sum2=0,sum3=0,n,x;
printf("enter size of array:\n");
scanf("%d",&n);
printf("xvalue:\n");
scanf("%d",&x);
printf(" enter the array elements:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}


for(i=0;i<n;i++,ptr++)
{   
    if(*ptr%x==0)
    {
       //ptr[i]=ptr[i]+1;
       (*ptr)++;
    }
   
}
printf("new arra:\n");
for(i=0;i<n;i++,ptr++)
{   
    printf("%d\n",*ptr);
   
}

}