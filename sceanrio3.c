#include<stdio.h>
int main()             
{
     int n;
     int first=-1,second=-1;
    scanf("%d",&n);
      int a[n];
     for(int i=0;i<n;scanf("%d\n",&a[i]),i++);
     for(int i=0;i<n;i++){
       if(a[i]>first)
       {
        second=first;
        first=a[i];
       }else if(a[i]>second&&a[i]<first) second=a[i];

     }
     if(second==-1)
     {
        printf("no second largest");
     }
     else printf("second largest elemet is %d",second);






}