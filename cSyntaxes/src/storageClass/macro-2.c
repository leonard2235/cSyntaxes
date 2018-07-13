#include<stdio.h>
#define SUM(A, B) (A + B)
#define PROD(A, B) (A * B)
int main()
{
 int num1, num2, sum, product;
 printf("nEnter the Two numbersn");
 scanf("%d%d",&num1,&num2);
 sum=SUM(num1,num2);
 product=PROD(num1,num2);
 printf("nnSum of two numbers using Macros is:%dn",sum);
 printf("nnProduct of two numbers using macros is:%dn",product);
 return 0;
}