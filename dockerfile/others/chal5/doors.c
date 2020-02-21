#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[]){
        if(argc==2){
                time_t t;
                srand(time(NULL));
                char flag0[]={"icc-{63eb1987bc"};
                char flag1[]={"ca765c91ed6fdd7f131f63}"};
                int maxNum = sizeof(flag0);
                char input[strlen(argv[1])];
                strcpy(input, argv[1]);
                if(strncmp(flag0, input, strlen(argv[1]))==0){
                        int minNum = strlen(argv[1]);
                        char randChar = flag0[rand() % (maxNum + 1 - minNum) + minNum];
                        printf("%c\n", randChar);
                }
                if(strncmp(strcat(flag0, flag1), input, strlen(argv[1]))==0){
                        printf("\n");
                }
        }

        else{
                printf("Usage: %s <door sequence>\n", argv[0]);
        }

        return 0;
}

