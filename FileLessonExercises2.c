#include <stdio.h>
#include <stdlib.h>

#define BOYUT 1000

int main(){
	
	char veri[BOYUT];
	char karakter;
	
	FILE * DosyaP;
	
	DosyaP = fopen("settings.txt","w");
	
	if(DosyaP == NULL){
		printf("Dosya acilamadi.");
		exit(-1);
	}
	
	printf("Veri giriniz : ");
	fgets(veri, BOYUT, stdin);
	fputs(veri, DosyaP);
	
	fclose(DosyaP);
	
	printf("\n\n");
	
	DosyaP = fopen("settings.txt","r");
	
	if(DosyaP == NULL)
	{
		// Dosya okunamadığı için dosyadan çık.
		printf("Dosya okunamadi.\n");
		exit(EXIT_FAILURE);
	}
	
	do
	{
		karakter = fgetc(DosyaP);
		putchar(karakter);
	} while(karakter != EOF);
	
	fclose(DosyaP);
	
	return 0;
}
