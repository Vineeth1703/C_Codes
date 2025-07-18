// c rogram to remove first occurencce of a cahracter from a string
/*#include <stdio.h>
#include <string.h>
/*void stringocuur(char str[],int i)
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
    scanf("%s", str);
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
}*/

#include <stdio.h>
#include <string.h>

void removeFirstOccurrence(char *str, char ch) {
    int i, j;
    int len = strlen(str);
    int found_index = -1;


    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            found_index = i;
            break; 
        }
    }

    
    if (found_index != -1) {
        for (j = found_index; j < len; j++) {
            str[j] = str[j + 1]; 
        }
    }
}

int main() {
    char str[100];
    char char_to_remove;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);
  
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to remove: ");
   
    scanf(" %c", &char_to_remove);

    removeFirstOccurrence(str, char_to_remove);

    printf("String after removing first occurrence of '%c': %s\n", char_to_remove, str);

    return 0;
}
    