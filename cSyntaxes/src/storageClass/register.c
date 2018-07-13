#include<stdio.h>

int main()
{
int num1,num2;
register int sum;

printf("\nEnter the Number 1 : ");
scanf("%d",&num1);

printf("\nEnter the Number 2 : ");
scanf("%d",&num2);

sum = num1 + num2;

printf("\nSum of Numbers : %d",sum);

return(0);
}