#include<stdio.h>
#include <stdio.h>
#include <string.h>
void stringocuur(char str[],int i)
{
 for(int j=i;j!='\0';j++)
 {
    str[j+1]=str[j];
}
printf("modified string is %s",str);
}
void main()
{
    int i, count = 0;
    char str[100];
    char ch;
    scanf("%[^\n]s", str);
    scanf("\n%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            // stringocuur(str,i);
            strcpy(&str[i], &str[i + 1]);
            break;
        }
    }
    printf("modified string is %s", str);
}