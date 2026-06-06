// Write a program following pattern
// *  *  *  *  *
// *  *  *  *
// *  *  *
// *  *
// *

#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter the Row :");
    scanf("%d",&r);

    for(i=1;i>=r;i--)
    {
        for(j=1;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }

}