#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
        char flag[]="icc-{ce567ecdf77f039640953a2943a46fb4}";
	int sum=0;
        if(argc==2){
                for(int i=0; i<strlen(argv[1]); i++){
                        sum+=argv[1][i];
                }
                if(sum==1244){
                        printf("Success!\n%s\n", flag);
                	
		}
                else{
                        printf("Wrong Key!\n");
                }
        }
        else{
        printf("Usage: %s <key>\n", argv[0]);
        }
}
