#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char* tabPhrase = NULL;
    //avant l'allocation
    printf("tabPhrase = %s\n",tabPhrase);

    tabPhrase = (char*)malloc(20*sizeof(char));

    // apres l'allocation
    printf("Apres l'allocaton ...\n");
    printf("tabPhrase = %s\n",tabPhrase);
    printf("on a tabPhrase[8] = %c\n",tabPhrase[0]);
    //printf("on a tabPhrase[10] = %c\n",tabPhrase[10]);

    strcpy(tabPhrase, "i'm raphael");

    printf("our string is : %s\n",tabPhrase);

    free(tabPhrase);

    return 0;
}
