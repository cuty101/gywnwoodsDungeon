/*padlock.c, source code*/

#include <stdio.h>

int main(){
        int pin=0; 							/* def int var */
        char flag[] = "icc-{003fcb67cfcd4f77f37c3649430fe683}"; 		/* flag value */
        while(pin!=8843){						/*while loop for pin input*/
                printf("Input pin: ");
                scanf("%d", &pin);					/*read pin input*/
        }
        if(pin==8843){							/*if condition to check pin*/
                printf("Flag: %s \n", flag);				/*print flag*/
        }
}