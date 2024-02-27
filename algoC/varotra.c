#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


/*
	prototype data
		article			: savo seim
		unity price		: 1200
		quantity		: 45
		category		: PPN
*/
typedef struct DATA{
	char article[200]; 
	char unityPrice[10];
	char quantity[10];
	char category[10];
}DATA;

void deleteNewline(char* str){
	int i = 0;
	while (str[i]) {  			/*tsy nety raha natao while (!'\0') */
		if(str[i] == '\n')	
			str[i] = '\0';
		i++;
	}
}
void set(const char* label,char *varLabel,int size){
	printf("Enter %s 		: ",label);
	fgets(varLabel, size, stdin); // il y a une retours a la ligne
	deleteNewline(varLabel);
}
void setData(FILE* f, DATA* data){
	set("article",data->article,200);	
	set("unity price",data->unityPrice,20);	
	set("quantity",data->quantity,20);	
	set("category",data->category,20);	
	fprintf(f, "%s,%s,%s,%s\n",data->article,data->unityPrice,data->quantity,data->category);
	//fclose(f);	
}

int main(){
	char article[]="banana";
	DATA data = {"savon","123","21","PPN"};/// mila manao allocation
	FILE* f = fopen("dataBruteVarotra.csv", "a+");
	//char 
	bool running = true;
	/*write on the file */
	//fprintf(f, "%s\n",article);

	while(running != false){
		setData(f,&data);
		printf("[y] : continue [n] : break : ");
		fclose(f);	
		//char i = fgetc(stdin);
		int i = 1;
		if(i == 0){
			running = false;
			break;
		}
	}

	//fprintf(f, "%s,%s,%s,%s\n",data.article,data.unityPrice,data.quantity,data.category);
	//fclose(f);
	return 0;
}
