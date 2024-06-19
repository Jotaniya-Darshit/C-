#include<stdio.h>
int main() 
{
    FILE *copy, *paste;
    char ch;

    copy = fopen("source.txt", "r");

    if (copy == NULL) 
    {
        printf("Unable to open the source file.\n");
    }

    paste = fopen("target.txt", "a");

    if (paste == NULL) 
    {
        printf("Unable to open the target file.\n");
    }

    while ((ch = fgetc(copy)) != EOF) 
    {
        fputc(ch, paste);
    }

    fclose(copy);
    fclose(paste);

    printf("Content copied successfully from source file to target file.\n");
}
