#include<stdio.h>
#include<conio.h>
  void main ()
/*******************************************
Author : Lynn Myat Thaw
Purpose : To read distance (unsigned int) and print it.
*******************************************/
{
    unsigned int distance;
    printf("Enter the distance between two planets:");
    scanf("%u",&distance);
    printf("You have entered : %u",distance);
    getch();
}
