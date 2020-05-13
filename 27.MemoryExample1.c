#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    /*  char name[50]; */
    char *name;
    name=malloc(200*sizeof(char));
    if(name==NULL)
      printf("Memory is not available");
    else
    {
       strcpy(name,"Hi Lynn, hope the course is useful.How's you're day?I hope its good.");
       printf("%s",name);
    }
    free(name);
    getch();
}
