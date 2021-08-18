#include <stdio.h>
#include <stdlib.h>

int main()
{char n[100];
int c;
float rate,p,x,f;
     system("COLOR 0C");
    printf("Welcome to my electricity bill calculator\n");
    printf("What is your name?\n");
    scanf("%s",n);
    printf("How much electricity did you consume this month\n");
    scanf("%d",&c);
    //* Can't be done like a string compare, must be done on the next line*//
    if (c<=199){
         rate=1.20;
        printf("Your rate is %.2f\n",rate);
    }
    else if (c>=200&&c<400){
        rate=1.50;
        printf("Your rate is %.2f\n",rate);
    }

    else if (c>=400&&c<600){
        rate=1.80;
        printf("Your rate is %.2f\n",rate);
    }

    else if (c>=600){
        rate=2.00;
        printf("Your rate is %.2f\n",rate);
}

    p=c*rate;
    printf("The amount you have to pay is %.2f\n",p);
    if (p>400){
            printf("Unfortunately we have additional costs for bills over 400.\n");
            x=(p/100)*15;
            f=x+p;
            printf("The final price is %.2fRs",f);

    }
    if (p<100){
        printf("Spend more money :P, not enough to charge you. ");
    }
    return 0;
}
