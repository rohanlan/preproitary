#include <stdio.h>
struct employee
{
    char name[52];
    char last_name[52];
    double salary;
} stu[2]; // structure che variable declare kelet (array of strucure kely for 2 employee)
void accept(struct employee *stu)
{
    for (int i = 1; i <= 2; i++)
    {
        printf("enter dtails for %d th emp : \n", i);
        printf("enter name : ");
        scanf("%s", stu[i].name);
        printf("enter last name : ");
        scanf(" %s", stu[i].last_name);
        printf("enter salary : ");
        scanf("%lf", &stu[i].salary);
    }
}
void print(struct employee *stu)
{
    for (int i = 1; i <= 2; i++)
    {
        printf("\n");
        printf("std %d details : \n", i);
        printf("name is : %s\n", stu[i].name);
        printf("roll last name is : %s\n", stu[i].last_name);
        printf("salary is : %lf\n", stu[i].salary);
    }
}
void increment(struct employee *stu)
{
    printf("after increment : \n");
    for (int j = 1; j <= 3; j++)
    {
        printf("for %d th year increment : \n", j);
        for (int i = 1; i <= 2; i++)
        {
            printf("salary is : %lf\n", stu[i].salary = ((stu[i].salary * 110) / 100));
        }
    }
}
int main()
{
    accept(stu);
    print(stu);
    increment(stu);
}