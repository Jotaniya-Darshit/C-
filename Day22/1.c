#include<stdio.h>
#include<string.h>
struct student
{
    int stu_id;
    char stu_name[100];
    int stu_age;
    char stu_course[100];
    char stu_city[100];
    int stu_standard;
    char stu_school[100];
};
int main()
{
    struct student s1;
    s1.stu_id = 1;
    strcpy(s1.stu_name,"Darshit Jotaniya");
    s1.stu_age = 19;
    strcpy(s1.stu_course,"Full Stack");
    strcpy(s1.stu_city,"Rajkot");
    s1.stu_standard = 12;
    strcpy(s1.stu_school,"V.V.P. College");

    printf("\n**Student Detail**\n\n");
    printf("ID = %d \n",s1.stu_id);
    printf("Name = %s \n",s1.stu_name);
    printf("Age = %d \n",s1.stu_age);
    printf("Course = %s \n",s1.stu_course);
    printf("City = %s \n",s1.stu_city);
    printf("Standard = %d \n",s1.stu_standard);
    printf("School = %s \n",s1.stu_school);
}