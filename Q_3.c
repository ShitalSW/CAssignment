//Fibonacci series upto n numbers

#include<stdio.h>

int main()
{
    int i , n;
    int x = 0;
    int y = 1;
    int z;

    printf("Enter the number to find Fibonacci series : ");
    scanf("%d", &i);

    printf("Fibonacci series is : %d , %d ,", x , y);
    
    for( n = 2; n < i; n++)
    {
        
        z = x + y;
        printf("%d ," , z);
        x = y;
        y = z;

    }

    return 0;

}