// WAP to print the number tgrom 0 to N if n is given by user

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the Number=");
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        printf("%d \n",i);
        i++;
    }
}