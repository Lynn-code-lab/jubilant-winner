#include<stdio.h>
#include<conio.h>
union Employee
{
    int id;
    char gender;
    char country[10]
};
void main()
{
    union Data d;
    ("Size of : %d",sizeof(d));
    getch();
}
