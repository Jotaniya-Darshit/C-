#include<stdio.h>
int main()
{
    char name[]= "Darshit";
    char *p;
    p=&name;
    for(int i=0; name[i] != NULL; i++)
    {
        printf("%u %c\n",p+i,*(p+i));
    }

}