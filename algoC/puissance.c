#include <stdio.h>

int power(int n, int p){
    return (p == 0) ?  1 : n * power(n,p-1);
}

int main(){

    int n = 4, p=2;
    int result = 1;
    for(int i = 0; i< p ; i++){
        result = result * n;    // c'est la puissance
        printf("on a la resulte : %d\n",result);
    }

    printf("on a %d ^ %d = %d\n",n,p,power(n, p));

    return 0;
}