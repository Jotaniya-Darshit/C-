#include <stdio.h>
#include <string.h>
void countVowels(char sentence[]) 
{
    int vowels[5] = {0};
    for (int i = 0; i < strlen(sentence); i++) 
    {
        if (sentence[i] == 'a' || sentence[i] == 'A') 
        {
            vowels[0]++;
        } 
        else if (sentence[i] == 'e' || sentence[i] == 'E') 
        {
            vowels[1]++;
        }
        else if (sentence[i] == 'i' || sentence[i] == 'I') 
        {
            vowels[2]++;
        } 
        else if (sentence[i] == 'o' || sentence[i] == 'O') 
        {
            vowels[3]++;
        } 
        else if (sentence[i] == 'u' || sentence[i] == 'U') 
        {
            vowels[4]++;
        }
    }

    printf("Number of Vowel in sentence =\n");
    printf("A: %d\n", vowels[0]);
    printf("E: %d\n", vowels[1]);
    printf("I: %d\n", vowels[2]);
    printf("O: %d\n", vowels[3]);
    printf("U: %d\n", vowels[4]);
}

int main() 
{
    char sentence[100];
    printf("Enter a sentence = ");
    scanf("%s",&sentence);
    countVowels(sentence);
    return 0;
}