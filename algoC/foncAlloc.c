#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocTab_1D(char* tabStr, int size){
    tabStr = (char*)malloc(size * sizeof(char));
}

int main(){

    char* tab = NULL; // pointe vers rien
    char* tabStr = NULL;

    //allocation:
    tab = (char*)malloc(20*sizeof(char));
    allocTab_1D(tabStr, 25); // c'est fausse

    // affecation
    strcpy(tab,"hello world!!");
    strcpy(tabStr, "je suis tabStr");

    //affichage
    printf("tab content : %s\n", tab);
    printf("tabStr content : %s\n", tabStr);


    return 0;
}
