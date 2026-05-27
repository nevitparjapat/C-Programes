#include<stdio.h>
int main()
{
    int i=20;
    printf("all odd no btw 20-1:");
    while(i>=1)
    {
        if(i%2!=0){
            printf("%d\t",i);
        }
        i--;
    }
    return 0;
}
