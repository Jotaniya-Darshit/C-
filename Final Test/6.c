#include <stdio.h>
struct Movie 
{
    char title[100];
    char genre[50];
    char lan[50];
};
int main() 
{
    int N;
    printf("Enter the number of Movies = ");
    scanf("%d", &N);

    struct Movie M[N];
    for (int i = 0; i < N; i++) 
    {
        printf("Enter details for movie %d =\n", i + 1);

        printf("Title = ");
        scanf("%s", &M[i].title);

        printf("Genre = ");
        scanf("%s", &M[i].genre);

        printf("Language = ");
        scanf("%s", &M[i].lan);
    }
    printf("\nList of Movies = \n");
    for (int i = 0; i < N; i++) 
    {
        printf("Movie %d =\n", i + 1);
        printf("Title = %s\n", M[i].title);
        printf("Genre = %s\n", M[i].genre);
        printf("Language = %s\n", M[i].lan);
        printf("\n");
    }
}