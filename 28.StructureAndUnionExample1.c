#include<stdio.h>
#include<conio.h>
struct Employee
{
    int id;   /* 4 bytes */
    char name[20];   /* 20 bytes */
    int age;   /* 4 bytes */
};
void main()
{
    struct Employee emp;
    printf("Enter ID : ");
    scanf("%d",&emp.id);
    printf("Enter Name : ");
    scanf("%s",&emp.id);
    printf("Enter Age : ");
    scanf("%d",&emp.id);

    printf("Employee ID : %d, Name : %s, Age : %d",emp.id, emp.name, emp.age);

    printf("\n\nStruct size : %d",sizeof(emp));

    getch();

}
