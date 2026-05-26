#include<stdio.h>
int main()
{
    int i;
    int sum = 0;
    i = 2;
    while(i<=20)
    {
        sum+=i;
        i+=2;
    }
    printf("sum of all the even no btw 1-20 is %d",sum);
    return 0;
}
