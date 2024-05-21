#include <stdio.h>
int main() 
{
    char str[100];
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf("%s",&str);

    while (str[len]!= '\0')
    {
        len++;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) 
    {
        if (str[i]!= str[j]) 
        {
            printf("The string is not a palindrome.\n");
            break;
        }
        else
        {
            printf("The string is a palindrome.\n");
            break;
        }
    }
}