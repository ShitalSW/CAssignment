// Factorial of number without recusrion
/* #include<stdio.h>
#include<math.h>

int fact();

int main()
{
    int result;
    result = fact();
    printf("factorial of number is : %d", result);
    return 0;
}

int fact()
{
    int r = 1;
    int i ,n;
    printf("Enter a number to find factorial :");
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        r = r*i;

    }
    return r;

} */
 
// Factorial of number with recusrion
#include<stdio.h>
#include<math.h>

int fact(int n);

int main()
{
    int n,result;
    printf("Enter the number to find factorial :");
    scanf("%d", &n);
    result = fact(n);
    printf("factorial of number is : %d", result);
    return 0;
}

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
    

}
