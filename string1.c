#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char str[10];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);

    
    printf("length of string %s is %d",str,i);
}