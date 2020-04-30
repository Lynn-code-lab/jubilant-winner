#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,n;
    printf("Enter any number");
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    getch();
}
