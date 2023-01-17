#include<stdio.h>
#include<string.h>

//Funktions Prototypen

//Hauptprogramm
int main () {
	/*
	*
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//
	char string[] = "C://Eigene Dateien/FOM/C-Code/main.c";
	char *extension = strstr(string,".");
	if(extension){
		extension++;
		printf("Extension: %s",extension);
	}
	printf("Dateiname: %s", strrchr(string,"/")+1);
			
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
