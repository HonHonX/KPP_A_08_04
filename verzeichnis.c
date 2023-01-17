#include<stdio.h>
#include<string.h>

//Hauptprogramm
int main () {
	/*
	*	Übung zum Umgang mit Strings
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *    Verzeichnis         * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//
	char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";
	char *extension = strstr(string,".");
	if(extension){
		extension++;
		printf("\nExtension: %s",extension);
	}
	char *dateiname = strrchr(string,'/');
	if(dateiname){
		dateiname++;
		printf("\nDateiname: %s",dateiname);
	}
	*dateiname = '\0';
	printf("\nVerzeichnis: %s",string);
			
	
	//Ende
	printf("\n\n");
	return 0;
}
