#include <stdio.h>
#include <stdlib.h>

int main()
{   int x;
    system("COLOR 0C");
    printf("What is your value of x?\n");
    scanf("%d",&x);
    printf("The factorial of %d is %d\n",x,factorial(x));

    return 0;
}
int factorial(int num){

if (num==1)
    return(1);
    else
        return(num*factorial(num-1));
}
