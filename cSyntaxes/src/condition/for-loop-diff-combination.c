#include <stdio.h>

int main () {

    int i = 0, k = 0;
    float j = 0;
    int loop_count = 5;

 
    for (j=5.5; j > 0; j--) {
        printf("%f\n",j);
    }

    for (i=2; (i < 5 && i >=2); i++) {
        printf("%d\n",i);
    }


    for (i=0; (i != 5); i++) {
        printf("%d\n",i);
    }

    /* Blank loop  */
    for (i=0; i < loop_count; i++) ;

    for(i=0;i<5;i++)
    {

    }

    for(i=2;i<5;)
    {
	 printf("%d\n",i);
	 i++;
    }


    for (i=0, k=0; (i < 5 && k < 3); i++, k++) {
        printf("%d\n",i);
    }

   
    i=5;
    for (; 0; i++) {
        printf("%d\n",i);
    }

    return 0;
}