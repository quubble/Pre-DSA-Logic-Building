/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void even(){
    int i=0;
    while(i<=100){
        if(i%2==0){
            printf("%d ", i);
        }
        i++;
    }
}

void odd(){
    int i=1;
    while(i<=100){
        if(i%2!=0){
            printf("%d ", i);
        }
        i++;
    }
}


int main()
{
    even();
    printf("\n\n");
    odd();

    return 0;
}