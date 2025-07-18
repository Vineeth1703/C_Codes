#include<stdio.h>
#include<string.h>
void main()
{
    int i,count=0;
    char str[100];
    char ch;
    //getchar(str,100);
    scanf("%s",str);
    scanf("\n%c",&ch);
    for(i=0;str[i]!='\0';i++)
   {
       if(str[i]==ch)
       {
        count++;
       }

   }
    
    printf("frequency of %c in %s is %d",ch,str,count);
}