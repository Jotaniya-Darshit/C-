#include <stdio.h>
#include<string.h>
int main() 
{
    FILE *P1, *P2;
    char sentence[1000];

    P1 = fopen("1.txt", "r");
    if (P1 == NULL) 
    {
        printf("Error opening input file.\n");
        return 1;
    }
    P2 = fopen("2.txt", "a");
    if (P2 == NULL) 
    {
        printf("Error opening output file.\n");
        return 1;
    }
    fgets(sentence, 1000, P1);

    strupr(sentence);

    fprintf(P2, "%s", sentence);

    printf("Sentence is convert into Upper case\n");
}
