#include<stdio.h>
#include<conio.h>
/*************************************************
Author : Lynn Myat Thaw[LynnMThaw@gmail.com]
Purpose : To read name from user and print it
*************************************************/
  void main ()
{
char name [30];
printf("Enter your name: ");
scanf("%s",&name);
printf("Hi %s, welcome to C- Programming!,Today you'll learn how to use C-Programming",name);
getch();
}
