#include<stdio.h>
#include<conio.h>

void main()
{
 int n=6;
 int a[n];

 printf("Enter the array elements:\n");
 for(int i=0;i<n;i++)
 {
    scanf("%d\n",&a[i]);
 }
 printf("array elements:\n");
 for(int i=0;i<n;i++)
 {
    printf("%d\n",a[i]);
 }
 int smallest= a[0];
 for(int i=0;i<n;i++)
 {
   if(smallest>a[i])
   {
    smallest=a[i];
   }


 }
printf("smallest:%d",smallest);
}
