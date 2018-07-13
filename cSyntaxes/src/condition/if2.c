#include <stdio.h>
int main(void)
{
    float x = 00.556678;
    int y;
 
    /* floating point val x is explicitly promoted to integer */
 
    if (y = (int)x)       
        printf("Inside if: floating point val but 0.0 is treated"
               " as TRUE i.e NON-ZERO VALUE in if condition!!\n");
 
    printf("the values: x is %f and y is %d\n", x,y);
    return 0;
}