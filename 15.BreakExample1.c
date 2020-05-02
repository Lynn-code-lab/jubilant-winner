#include<stdio.h>
#include<conio.h>
/**************************************************
Author : Lynn Myat T
Purpose : Print first number divisible by 117 after 1000
**************************************************/
void main()
{
   int i,j;
   for(i=1000;i<=1117;i++)
   {
       if(i%1117==0)
       {
         printf("%d",i);
       }
   }
   getch();
}

