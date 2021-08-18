#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
system("COLOR 0C");

    printf("Check if your number is odd or even\n");
    scanf("%d",&x);
    if (x%2==0){
        printf("This number is even.\n");}
        else
            printf("This number is odd.");

    return 0;
}
