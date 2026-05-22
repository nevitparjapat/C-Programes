//Wap to multiple of table

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a Table :");
    scanf("%D",&a);

    for(b=1;b<=10;b++)
    {
        printf("%d * %d = %d \n", a,b,a*b);
    }
    return 0;
}