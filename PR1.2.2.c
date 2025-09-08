#include<stdio.h>
int main()
{
int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);
 
    printf("Enter the second number: ");
    scanf("%d", &b);
     
    printf("Enter the third number: ");
    scanf("%d", &c);    
    if (a > b && a > c) {
        printf("\nLargest number is: %d\n", a);
        printf("Smallest number is: %d\n", b<c?b:c);
    } else if (b > a && b > c) {
        printf("\nLargest number is: %d\n", b);
        printf("Smallest number is: %d\n", a<c?a:c);
    } else if (c > a && c > b) {
        printf("\nLargest number is: %d\n", c);
        printf("Smallest number is: %d\n", a<b?a:b);
    } else {
        printf("\nAll numbers are equal.\n");
    }
    return 0;
}