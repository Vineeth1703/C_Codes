#include<stdio.h>
int main()
{
 
 int a[10];
int i,n,x;
printf("enter size of array:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int *ptr1=a,*ptr2=a+n-1;
   for(i=0;i<n/2;i++) //while(ptr1<ptr2)
    {

        *ptr1=(*ptr1)*(*ptr2);
        *ptr2=(*ptr1)/(*ptr2);

        
        *ptr1=(*ptr1)/(*ptr2);


        ptr1++;
        ptr2--;
    }
printf("swapped array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }
}