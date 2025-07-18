
#include <stdio.h>
#include <string.h>

int main()
{
    int i,count=1;
    char str[100];
    char ch;
    scanf("%[^\n]s", str);
  str[strcspn(str, "\n")] = 0;
    for (i=0; str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {

          count++;

        }
    }
    printf("no of words is %d",count);
    return 0;
}
