#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main(){
	
	char veri[VERI_BOYUTU];
	char karakter;
	
	FILE * fileP;
	
	fileP = fopen("giris.txt","w");
	
	if (fileP == NULL)
	{
		printf("Dosya acilamadi.");
		exit(-1);
	}
	
	fprintf(fileP, "Kullanici adi : ");
	printf("Kullanici adi : ");
	
	fgets(veri, VERI_BOYUTU, stdin);
	
	fputs(veri, fileP);
	
	fclose(fileP);
	
	fileP = fopen("dosya/giris.txt","a");
	
	fprintf(fileP, "Sifre : ");
	printf("Sifre : ");
	
	fgets(veri, VERI_BOYUTU, stdin);
	
	fputs(veri, fileP);
	
	printf("\nDosya basari ile olustu, icerigi okunuyor.\n\n");
		
	fclose(fileP);
	
	fileP = fopen("dosya/giris.txt","r");
	
	do
	{
		karakter = fgetc(fileP);
		putchar(karakter);
		
	} while(karakter != EOF);
	
	
	fclose(fileP);
	
	return 0;
}