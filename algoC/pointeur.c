#include <stdio.h>
int main(){

	char string[] = "raphael";
	char* pString = NULL;
	/*
	 * efa pointeur io dia tsy atao anzao 
	 *	pString = &string;
	 *
	 */
	pString = string;


	printf("adress du string 	= %p\n",&string);
	printf("contenu  du pString 	= %p\n",pString);

	printf("on a, la contenu du string est 		: %s\n",string);
	printf("on a, la contenu du pString est 	: %s\n",pString);


	pString = "rakoto";
	printf("on la pString = \"rakoto\";\n");
	printf("on a, la contenu du string est 		: %s\n",string);
	printf("on a, la contenu du pString est 	: %s\n",pString);

	return 0;
}
