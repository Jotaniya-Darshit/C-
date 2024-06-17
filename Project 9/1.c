#include <stdio.h>
struct Student 
{
    int rollno;
    char s_name[50];
    int Chemistry;
    int Mathematics;
    int Physics;
};
int main() 
{
    int n;
    printf("Enter the number of Student = ");
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for Student %d = \n", i+1);
        printf("Student Roll no. = ");
        scanf("%d", &s[i].rollno);
        printf("Name = ");
        scanf("%s", s[i].s_name);
        printf("Enter Chemistry mark = ");
        scanf("%d", &s[i].Chemistry);
        printf("Enter Mathematics mark = ");
        scanf("%d", &s[i].Mathematics);
        printf("Enter Physics mark = ");
        scanf("%d", &s[i].Physics);
    }
    printf("\nStudent Details =\n");
    for (int i = 0; i < n; i++) 
    {
        printf("\n%s (%d)\n",s[i].s_name,s[i].rollno);
        printf("Chemistry = %d\n", s[i].Chemistry);
        printf("Mathematics = %d\n", s[i].Mathematics);
        printf("Physics = %d\n", s[i].Physics);
        int sum = 0;
        sum = s[i].Chemistry+s[i].Mathematics+s[i].Physics;
        printf("Total of all Mark = %d/300",sum);
        float Percentage;
        Percentage = (sum*100) / 300;
        printf("\nPercent = %.2f%%\n",Percentage);
    }
}