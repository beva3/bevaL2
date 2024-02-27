#include <bits/posix2_lim.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
 
typedef struct Data{
    char article[30];
    char unityPrice[10];
    char quatity[10];
    char category[10];
} Data;

void allocTab_2dim(char** tab, int line, int colone);
char** fileToTab(FILE* f);
int lineFile(FILE* f);


int main(){
    FILE* f = fopen("/home/raphael/Desktop/polyRapha/dataTest.txt", "a+");
    //char line[256];
    
/*
    //split data

    char line[]= "article,unity price,quatity,category";
    char* token = NULL;

    token = strtok(line, ","); 
    while (token != NULL) {
        printf("%s\n",token);
        strcpy(tab[i], token);
        token = strtok(NULL, ",");
        i++;
    }
*/


/* 
    // lire file
    while (fgets(line, 256, f)) {
        printf("%s",line);
    }
*/

    
/* 
    // write in file
    for (int i = 10; i<100; i++) {
        fprintf(f, "article%d,unity price%d,quatity%d,category%d\n",i,i,i,i);
    }
 */

    
    char** data = NULL;
    int l = 12;//lineFile(f); 
    char tmp[256];        
    allocTab_2dim(data, l, 255);

    for (int i = 0; i < l; i++) {
        fgets(tmp, 255, f);
        printf("%d >> %s",i,tmp);
        //strcpy(data[i], tmp); 
    }
    //printf("on a : %s \n",data[0]);
/* 
    char** tab = NULL;
    int line = 12;
    int colone = 12;
    tab = (char**)malloc(line*sizeof(char*));
    for (int i = 0 ; i < line ; i++) {
        tab[i] = (char*)malloc(colone * sizeof(char));
    }
    strcpy(tab[0], "data[0]");
    printf("on a : %s \n",tab[0]);
  */   
    fclose(f);
    return 0;
}



void allocTab_2dim(char** tab, int line, int colone){
    tab = (char**)malloc(line*sizeof(char*));
    for (int i = 0 ; i < line ; i++) {
        tab[i] = (char*)malloc(colone * sizeof(char));
    }
}

char** fileToTab(FILE* f){
    char** data = NULL;
    int line = 12;//lineFile(f); 
    char tmp[256];        
    allocTab_2dim(data, line, 256);

    for (int i = 0; i < line; i++) {
        //fgets(tmp, 256, f);
        //strcpy(data[i], tmp); 
    }

    return data;
}

int lineFile(FILE* f){
    int i = 0;
    char tmp[256]; /* doit allouer */

    while (fgets(tmp, 256, f))
        i++;

    return i;;
}
