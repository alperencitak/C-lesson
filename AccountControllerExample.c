#include <stdio.h>
#include <string.h>

int main(){
	
	char kayitisim[30];
	char kayitsifre[20];
	char isim[50];
	char sifre[20];
	
	
	printf("**Kullanici adi ve sifre belirleyin.\n...\n\n");
	
	kayitisimloc:
	printf("Kullanici adi belirleyin : ");
	scanf("%s", kayitisim);
	if (strlen(kayitisim) > 30){
		printf("Kullanici adi 30 karakterden buyuk olamaz! Tekrar deneyin.\n\n");
		goto kayitisimloc;
	}
	
	kayitsifreloc:
	printf("Sifre belirleyin : ");
	scanf("%s", kayitsifre);
	if (strlen(kayitsifre) > 20){
		printf("Sifreniz 20 karakterden buyuk olamaz! Tekrar deneyin.\n\n");
		goto kayitsifreloc;
	}
	if (strlen(kayitsifre) < 5){
		printf("Sifreniz en az 5 karakter olmali! Tekrar deneyin.\n\n");
		goto kayitsifreloc;
	}

	printf("\n\n");
	
	
	printf("**Kayit basarili! Lutfen giris yapin.\n...\n\n");
	
	girisloc:
	printf("Kullanici adi : ");
	scanf("%s", isim);
	
	printf("Sifre : ");
	scanf("%s", sifre);
	
	if (strcmp(isim, kayitisim) != 0 || strcmp(sifre, kayitsifre) != 0){
		printf("\nKullanici adi veya sifre yanlis! Tekrar deneyin\n\n");
		goto girisloc;
	}
	
	printf("\n**Giris basarili!");*/
	

	for(int x=0; x<11; x++){
		for(int y=0; y<11; y++){
			if(x==5 || x==y || y==5 || x+y==10){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		
	}
	
	return 0;
}