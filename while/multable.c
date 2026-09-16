/******************************************************************************

5. Print the multiplication table of a given number from n × 1 to n × 10.
6. Calculate and print the sum of the first n natural numbers.
7. Calculate the sum of all even numbers from 1 up to n.
8. Calculate the sum of all odd numbers from 1 up to n.
9. Calculate and print the factorial of a given number.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i=1;
    
    printf("enter number for table: ");
    scanf("%d",&num);
    
    while(i<=10){
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}