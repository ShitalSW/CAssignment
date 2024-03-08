#include<stdio.h>

int main()
{
    char ch;
    int uppercase = 0, lowercase = 0, digitcount = 0 ,othercount = 0;

    printf("Please Enter Character :");

    while ((ch = getchar()) != '\n') {
        if ((ch >= 'A' && ch <= 'Z')) {
            uppercase++;
        } else if (ch >= 'a' && ch <= 'z') {
            lowercase++;
        } else if (ch >= '0' && ch <= '9') {
            digitcount++;
        } else {
            othercount++;
        }
    }
    printf("\nResults:\n");
    printf("Uppercase characters: %d\n", uppercase);
    printf("Lowercase characters: %d\n", lowercase);
    printf("Digits: %d\n", digitcount);
    printf("Other characters: %d\n", othercount);

    return 0;
}