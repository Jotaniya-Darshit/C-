#include<stdio.h>
int find(char a[])
{
    int c=0;
    for (int i = 0; a[i] != NULL; i++)
    {
       if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
       {
            c++;
       }
    }
    return c;
}
int main()
{
    char name[50];
    printf("Enter Name = ");
    scanf("%s",&name);
    printf("Vowel = %d",find(name));
    
}