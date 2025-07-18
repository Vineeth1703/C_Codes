#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5];
 int sumeven,sumodd;
 printf("Enter the array elements:\n");
 for(int i=0;i<4;i++)
 {
    scanf("%d\n",&a[i]);
 }
 printf("Enter the array elements:\n");
 for(int i=0;i<4;i++)
 {
    printf("%d\n",a[i]);
 }
  for(int i=0;i<4;i++)
  {
   if(a[i]%2==0)
   {
    sumeven+=a[i];
    printf("even sum:%d\n,odd sum:%d",sumeven,sumodd);
    break;
   }
  else {
   sumodd+=a[i];
   printf("even sum:%d\n,odd sum:%d",sumeven,sumodd);
    }
  }
printf("even sum:%d\n,odd sum:%d",sumeven,sumodd);

}
