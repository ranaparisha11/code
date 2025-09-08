#include<stdio.h>
int main()
{
    float net_sales, gross_sales, discount; 
    printf("Enter Net Sales: ");
    scanf("%f", &net_sales);
    if (net_sales <= 5000) {
        discount = net_sales * 0.02;
    } else if (net_sales <= 10000) {
        discount = net_sales * 0.05;
    } else {
        discount = net_sales * 0.10;
    }
}