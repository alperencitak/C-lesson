s#include <stdio.h>
#include <string.h>

struct Sinav{
	char name[50];
	int puan;
};

int main()
{
	int sinir = 3;
	struct Sinav sinav[sinir];
	for (int i = 0; i < sinir; i++){
		printf("%d . Ogrencinin adini giriniz : ", i+1);
		scanf("%s", sinav[i].name);	
		printf("%d . Ogrencinin sinav puanini giriniz : ", i+1);
		scanf("%d", &sinav[i].puan);
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	for (int j = 0; j < sinir; j++){
		printf("%d . Ogrenci ve puani : %s - %d\n",j+1,sinav[j].name,sinav[j].puan);
		
	}
	
	return 0;	
}