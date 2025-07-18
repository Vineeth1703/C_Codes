

#include<stdio.h>
void main(){
int n;
int i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=0;j<=n-i;j++)
{
 printf("%d\t",n-j);
}
printf("\n");}



}
