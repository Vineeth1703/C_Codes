#include<stdio.h>
int main()
{
 int n,key,found;
 printf("enter the size of the array:\n");
 scanf("%d",&n);
 int a[n];
 printf("enter the  array:\n");
 for(int i=0;i<n;i++)scanf("%d",&a[i]);
 printf("enter the  key:\n");
 scanf("%d",&key);
 for(int i=0;i<n;i++)
 {
    if(key==a[i])
    {
   printf("%d found at location %d",key,i+1);
   found=1;
      break;
    }}
    if(!found)
    printf("not found");
    
 }

