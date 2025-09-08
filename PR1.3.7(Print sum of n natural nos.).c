#include<stdio.h>
int main()
{
    int n,i , sum=0;
printf("Enter the value ofn : ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    sum=sum+i;
    printf("SUM of the first %d natural number is : %d\n",n,sum);

}
return 0;
}