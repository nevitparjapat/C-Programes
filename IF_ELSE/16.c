//WAP that accepts three numbers from the user and check if numbers are in “increasing” or “decreasing” order.

#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter a First Number");
    scanf("%f",&a);
    printf("Enter a Second Number");
    scanf("%f",&b);
    printf("Enter a Third Number");
    scanf("%f",&c);

    if(a<b && b<c)
    {
        printf("It is increasing order");
    }
    else
    if(a>b && b>c)
    {
        printf("It is Decreasing Order");
    }

}

    