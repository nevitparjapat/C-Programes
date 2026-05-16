// WAP to print the number from 0 to N if n is given by user

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the Number=");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        printf("%d",i);
    }
}