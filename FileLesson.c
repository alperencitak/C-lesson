#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main(){
	
	char veri[VERI_BOYUTU];
	
	// Dosyanın referansını tutan işaretçi
	FILE * fPtr;
	
	/*
	
	// Dosyayı w (write) modunda aç.
	fPtr = fopen("dosya1.txt", "a+");
	
	// fopen eğer başarısız olursa NULL döner.
	if(fPtr == NULL)
	{
		// Dosya oluşturulamadığı için dosyadan çık.
		printf("Dosya olusturulamadi.\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Dosyaya kaydedilicek olan giriyi al : ");
	
	// Dosyaya kaydedilicek veriyi kullanıcıdan al.
	fgets(veri, VERI_BOYUTU, stdin);
	
	// Veriyi dosyaya yaz.
	fputs(veri, fPtr);
	
	// Dosyayı kapat.
	fclose(fPtr);
	
	printf("Dosyaniz basari ile olusturuldu...\n");
	
	*/
	
	fPtr = fopen("dosya1.txt", "r");
	
	char karakter;
	
	if(fPtr == NULL)
	{
		// Dosya okunamadığı için dosyadan çık.
		printf("Dosya okunamadi.\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Dosya basari ile acildi, icerigi okunuyor.\n\n");
	
	do
	{
		// Dosyadan bir karakter oku.
		karakter = fgetc(fPtr);
		
		// Dosyanın okuduğu karakteri ekrana yazdır.
		putchar(karakter);
		
	} while(karakter != EOF); // Bunu, EOF (End Of File) karakterine gelene kadar yap. (Her dosyanın sonunda EOF vardır.)
	
	fclose(fPtr);
	
	return 0;
}