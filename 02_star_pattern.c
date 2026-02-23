#include<stdio.h>

int main(){
    for (int i = 1; i < 6; i++)
    {
        for (int j =5-i; j>0; j--)
        {
            printf(" ");
        }
        for (int j = 5; j>=6-i; j--)
        {
            printf("*");
        }
        printf("\n");
       
    }
   
    
    return 0;
} 
