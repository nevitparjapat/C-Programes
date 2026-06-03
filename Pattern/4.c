    //    * * *
    //    * * *  
    //    * * *
    //    * * *

    #include<stdio.h>
    int main()
    {
        int i,j,u;
        printf("Enter a Row:");
        scanf("%d",&u);

        for(i=1;i<=u;i++)
        {
            for(j=1;j<=u;j++)
            {
                printf("*");
            }
            printf("\n");
        }
return 0;
    }