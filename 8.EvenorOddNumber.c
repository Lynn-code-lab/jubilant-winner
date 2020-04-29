#include<stdio.h>
#include<conio.h>
/**********************************************************
Author : Lynn
Purpose : To read a number from user and check even /odd
**********************************************************/
void main ()
{
   //Variable Declarations
   int input;

   //Read value from user
   printf("Enter any number:");
   scanf("%d",&input);

   //Logic
   if(input==0)
       printf("The number is Zero",input);
   else if(input%2==0)
    printf("%d is Even Number",input);
   else
       printf("%d is Odd number",input);
       getch();
}
