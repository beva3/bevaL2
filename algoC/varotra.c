#include <stdio.h>
#include <string.h>


int main(){
	char article[]="banana";
	FILE* f = fopen("dataBruteVarotra.csv", "a+");

	/*write on the file */
	fprintf(f, "%s\n",article);
	return 0;
}
