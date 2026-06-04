//WAP to print a pattern 
// *  *  *  *  *
//    *  *  *
//       *

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a ROW :");
    Scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("*");
    }
}