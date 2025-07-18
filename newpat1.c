#include<stdio.h>
void main(){
int n;
int i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    if(j>=n-i-1)
    {
     printf("\t%d",j+1);}
    else{
         printf("\t");}
}
printf("\n");}

}

