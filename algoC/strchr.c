#include <string.h>
#include <stdio.h>

int main(){
    char chaine[]="asdf";
    char*p = strchr(chaine,'f');

    printf("on a p = %s\n",p);
    printf("on a p = %c",*p);
    return 0;
}
