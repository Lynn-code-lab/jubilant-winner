#include<stdio.h>
#include<conio.h>
/*******************************************
Author : Lynn Myat T
Purpose : To add two numbers and ask to continue or not using do while
******************************************************/
void main()
{
  char ch;
  int a, b, sum;
  do
  {
      printf("Enter First number:");
      scanf("%d",&a);
      printf("Enter second Number");
      scanf("%d",&b);
      sum=a+b;
      printf("Sum of %d and %d is %d",a,b,sum);
      printf("\n\n\nDo you want another set (y/n):");
      scanf(" %c",&ch);
  }
  while(ch=='yes');
}





