#include <stdio.h>
struct student
{
    int roll_no;
    char name[52];
    int marks;
} stu[2];
void accept(struct student stu[2])
{

    for (int i = 1; i <= 2; i++)
    {
        printf("enter dtails for %d th std : \n", i);
        printf("enter roll no : ");
        scanf("%d", &stu[i].roll_no);
        printf("enter name : ");
        scanf("%s", stu[i].name);
        printf("enter marks : ");
        scanf("%d", &stu[i].roll_no);
    }
}
void print(struct student stu[2])
{
    for (int i = 1; i <= 2; i++)
    {
        printf("\n");
        printf("std %d details : \n", i);
        printf("roll no is : %d\n", stu[i].roll_no);
        printf("name is : %s\n", stu[i].name);
        printf("marks is : %d\n", stu[i].roll_no);
    }
}
int main()
{
    accept(stu);
    print(stu);
}