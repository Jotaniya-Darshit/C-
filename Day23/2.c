#include <stdio.h>
int main() 
{
    FILE *p;
    int i;

    p = fopen("demo.txt", "a");

    if (p == NULL) 
    {
        printf("Error opening file.");
    }

    for (i = 0; i <= 50; i++) 
    {
        if (i % 3 == 0 || i % 5 == 0) 
        {
            fprintf(p, "%d\n", i);
        }
    }
    printf("Code Run Successfully.\n");
}