#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    
    if (a > b) {
        printf("\nLargest number is: %d\n", a);
    printf("Smallest number is: %d\n", b);
    } else if (b > a) {
        printf("\nLargest number is: %d\n", b);
        printf("Smallest number is: %d\n", a);
    } else {
        printf("\nBoth numbers are equal.\n");
    }
    return 0;
}