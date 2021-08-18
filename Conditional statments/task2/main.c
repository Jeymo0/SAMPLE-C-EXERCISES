#include <stdio.h>
#include <stdlib.h>

int main()
{system ("COLOR 0C");
int menu,r,l,w,b,h;
float pi,A;
char choice[100];
pi=3.14;
do{
printf("Write a number for you choice\n");
printf("1. Area of a circle\n");
printf("2. Area of a square/rectangle\n");
printf("3. Area of a triangle\n");
scanf("%d",&menu);
switch(menu){
    case 1: printf("Write your radius?\n");
            scanf("%d",&r);
            A=pi*pow(r,2);
            printf("The area is %.2f\n",A);
        break;
    case 2: printf("What is your length\n");
            scanf("%d",&l);
            printf("What is your width?\n");
            scanf("%d",&w);
            A=l*w;
            printf("The area is %.2f\n",A);
            break;
            printf("The width is .2f%",A);
    case 3: printf("What is you height?\n");
            scanf("%d",&h);
            printf("What is the base of the triangle?\n");
            scanf("%d",&b);
            A=0.5*h*b;
            printf("The area is %.2f\n",A);
            break;
        }
printf("Do you want to continue the program\n");
printf("Write yes or no :\n");
scanf("%s",&choice);
}

while(strcmp(choice,"yes")==0);{
} if(strcmp(choice,"no")==0){
    printf("That's the end of the program.");
    }
    return 0;
}
