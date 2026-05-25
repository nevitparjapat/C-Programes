#include<stdio.h>
int main()
{
    int i ,x;
    i = 1;
    scanf("%d",&x);
    while (i<=x)
    {
        if(x%i==0)
        printf("%d \t",i);
        i++;
    }
    return 0;
}
