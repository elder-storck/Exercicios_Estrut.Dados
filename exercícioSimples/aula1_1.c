#include<stdio.h>
#include<stdlib.h>


int main(){
    int var1=1,var2=2,var3=3,var4=4;
    printf("\nos vallores das variaveis sao:%d,%d,%d,%d\n",var1,var2,var3,var4);
    int *pvar = (int*) malloc((sizeof(int))*4);
    pvar[0] = 10;
    pvar[1] = 11;
    pvar[2] = 12;
    pvar[3] = 13;
    printf("...\n");
    printf("Modificando variaveis\n");
    printf("...\n");
    printf("os vallores das variaveis sao:%d,%d,%d,%d\n",pvar[0],pvar[1],pvar[2],pvar[3]);
    
free(pvar);

    return 0;
}