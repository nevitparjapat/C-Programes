// WAP which will print given sequence
//5,20,35,50,65,80

#include <stdio.h>

int main() {
    int num = 5;   

    for(int i = 0; i < 6; i++) {  
        printf("%d \n", num);
        num += 15; 
    }

    return 0;
}
