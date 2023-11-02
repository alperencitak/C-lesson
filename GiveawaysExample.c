#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() 
{
	srand(time(0));
    
    int i, kisiSayisi;
    printf("Listenin kac kisiden olusacagini giriniz : ");
    scanf("%d", &kisiSayisi);
	char cekilisListe[kisiSayisi][50];
	
	for (i = 0; i < kisiSayisi; i++)
	{
		printf("%d.Kisi : ",i+1);
		scanf("%s", &cekilisListe[i]);
	}
	int randomSayi = rand() % kisiSayisi;
    
    printf("\n\nCekilisi kazanan kisi : %s\n", cekilisListe[randomSayi]);
	
	return 0;
}
