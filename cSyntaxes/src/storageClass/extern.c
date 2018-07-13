#include<stdio.h>
void write_extern(void);

extern int count;

void write_extern(void) 
{
 printf("count is %in", count);
}

int count = 5;

main() 
{
 write_extern();
}
