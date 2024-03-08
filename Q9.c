#include <stdio.h>
int main() {
    int decimal_num, binary_num = 0, i = 1, hexa_number,remainder,octal_num=0,remainder1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);
    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
        remainder1=decimal_num % 2;
        octal_num /=8;
        octal_num +=remainder1 *i;

        

    }
    printf("Binary number: %d\n", binary_num);
    printf("Octal equivalent: %o\n",octal_num);
    return 0;
    
    printf("Given Number: %d\n", decimal_num);
    printf("Binary equivalent: %d\n",binary_num);
    printf("Octal equivalent: %o\n", octal_num);
    printf("Hexadecimal equivalent: %X\n", hexa_number);

    return 0;
}

