#include<stdio.h>
int main()
{
    int i=1, even=0,odd=0;
    while(i<=20)
    {
        if(i%2==0){
       even+=i;  
    } 
    else{
        odd+=i;
    }
   i++;
} 
printf("%d\t%d",even,odd);
return 0;
}
