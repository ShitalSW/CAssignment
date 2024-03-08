// multiplication of matrix
#include<stdio.h>
void accept(int *arr);
void disp(int *arr);

int main(void)
{
    int a[4],b[4],c[4];
    int i;
    accept(a);
    accept(b);
    disp(a);
    disp(b);
    for(i=0;i<4;i++)
        c[i] = a[i] * b[i];
    disp(c);
    return 0;
}
void accept(int *arr)
{
    int i;
    printf("Enter array elements :");
    for(i=0;i<4;i++)
        scanf("%d",(arr+i));
}
void disp(int *arr)
{
    int i;
    printf("\n Array elements are : ");
    for(i=0;i<4;i++)
        printf("%d \t",*(arr+i));
}