#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define BOYUT 500

long long int basamakSayisi(long long int sayi);
void musteriBilgileri();
void animasyonAnaMenu();

int musteriNumarasi;
long long int kayitTC;
char isimMusteri[50], soyisimMusteri[50];

int main() 
{
	long long int girisTC;
	int islem, girisBasari = 0, islemProfil;
	char isimKayit[50], soyisimKayit[50];
	char sorun[BOYUT];
    
    anaMenu:
    animasyonAnaMenu();
    
    scanf("%d",&islem);
    system("cls");
    
    switch(islem){
    	case 1:
    		printf("Musteri kayit icin asagidaki bilgileri dikkatlice doldurunuz!\n");
    		printf("Isminiz : ");
    		scanf("%s",isimKayit);
    		printf("Soyisminiz : ");
    		scanf("%s",soyisimKayit);
    		tcKayit:
    		printf("TC : ");
    
    		if (scanf("%lld", &kayitTC) != 1){
    			fflush(stdin);
    			printf("\n\nTC 11 haneli olmalidir ve rakamlardan olusmalidir! Tekrar deneyin.\n\n");
   				goto tcKayit;
			}
    
			else if(basamakSayisi(kayitTC) != 11){
    			printf("\n\nTC 11 haneli olmalidir ve rakamlardan olusmalidir! Tekrar deneyin.\n\n");
   				goto tcKayit;
			}
			
			srand(time(0));
			musteriNumarasi = 10000000 + rand()%10000000;
			
			system("cls");
			printf("\n\nKaydiniz basariyla olusturuldu. Ana menuye yonlendiriliyorsunuz.\n\n");
			sleep(1);
			system("cls");
			printf("\n\nKaydiniz basariyla olusturuldu. Ana menuye yonlendiriliyorsunuz..\n\n");
			sleep(1);
			system("cls");
			printf("\n\nKaydiniz basariyla olusturuldu. Ana menuye yonlendiriliyorsunuz...\n\n");
			sleep(1);
			system("cls");
			printf("\n\nKaydiniz basariyla olusturuldu. Ana menuye yonlendiriliyorsunuz.\n\n");
			sleep(1);
			system("cls");
			printf("\n\nKaydiniz basariyla olusturuldu. Ana menuye yonlendiriliyorsunuz..\n\n");
			sleep(1);
			system("cls");
			goto anaMenu;
			
			break;
			
		case 2:
			printf("Lutfen giris yapiniz. Eger kaydiniz yoksa kayit olunuz.\n\n");
			isim_soyisimGiris:
			printf("Isim : ");
			scanf("%s",isimMusteri);
			printf("Soyisim : ");
			scanf("%s",soyisimMusteri);
			
			if (strcmp(isimMusteri, isimKayit) != 0 || strcmp(soyisimMusteri, soyisimKayit) != 0){
				printf("\n\nİsim veya soyisim hatali! Tekrar deneyin.\n\n");
				goto isim_soyisimGiris;
			}
			
			tcGiris:
			printf("TC : ");
			
			if (scanf("%lld", &girisTC) != 1){
    			fflush(stdin);
    			printf("\n\nTC 11 haneli olmalidir ve rakamlardan olusmalidir! Tekrar deneyin.\n\n");
   				goto tcGiris;
			}
			else if(basamakSayisi(girisTC) != 11){
    			printf("\n\nTC 11 haneli olmalidir ve rakamlardan olusmalidir! Tekrar deneyin.\n\n");
   				goto tcGiris;
			}
			else if(kayitTC != girisTC){
				printf("\n\nTC kaydi bulunamadi! Tekrar deneyin.\n\n");
				goto tcGiris;
			}
			
			system("cls");
			printf("\n\nGiris Basarili. Yonlendiriliyorsunuz.\n\n");
			sleep(1);
			system("cls");
			printf("\n\nGiris Basarili. Yonlendiriliyorsunuz..\n\n");
			sleep(1);
			system("cls");
			printf("\n\nGiris Basarili. Yonlendiriliyorsunuz...\n\n");
			sleep(1);
			system("cls");
			printf("\n\nGiris Basarili. Yonlendiriliyorsunuz.\n\n");
			sleep(1);
			system("cls");
			printf("\n\nGiris Basarili. Yonlendiriliyorsunuz..\n\n");
			sleep(1);
			system("cls");
			girisBasari = 1;
			
			break;
			
		case 3:
			sorunGiris:
			printf("Sorununuz nedir?\n- ");
			scanf("%s",sorun);
			
			FILE * sorunlar;
			sorunlar = fopen("musteriSorunlar.txt","a+");
			
			if (sorunlar == NULL){
				printf("Sistemde sorun var!");
				exit(-1);
			}
			
			fputs(sorun, sorunlar);
			fclose(sorunlar);
			
			printf("Sorununuz destege ulastirilicaktir.");
			sleep(3);
			
			break;
	}
    
    if (girisBasari == 1)
	{
    	girisMenu:
   		printf("----------------Musteri Menu----------------\n\n");
   		printf("Yapmak istediginiz islemi tuslayiniz.\n\n");
    	printf("1 - Musteri Bilgileri\n\n");
    	printf("2 - Musteri Hizmetleri\n\n");
    	printf("----------------------------------------\n\n");
    
    	scanf("%d",&islemProfil);
    	system("cls");
    	
    	switch(islemProfil){
    		case 1:
    			musteriBilgileri();
    			
    			break;
    		
    		case 2:
    			printf("Musteri hizmetlerine baglaniyorsunuz...");
    			sleep(3);
    			
    			break;
		}
	}
    
    
    return 0;
}

long long int basamakSayisi(long long int sayi){
	
	int basamakSayisi = 0;
	
	while(sayi != 0){
		sayi /= 10;
		basamakSayisi++;
	}
	
	return basamakSayisi;
}

void musteriBilgileri(){
	
	void sabit(){
		printf("| Isim = %s\n", isimMusteri);
    	printf("| Soyisim = %s\n", soyisimMusteri);
    	printf("| TC = %lld\n", kayitTC);
    	printf("| Musteri Numarasi = %d\n", musteriNumarasi);
	}
	
	int i,j;
	
	for(i = 0; i < 35; i++){
		system("cls");
		for(j=0; j<i;j++){
			printf("#");
		}
		printf("\n");
		sabit();
		printf("\n");
		for(j=0; j<i;j++){
			printf("#");
		}
		Sleep(55);
	}	
}

void animasyonAnaMenu(){
	
	void sabit(){
		printf("Yapmak istediginiz islemi tuslayiniz.\n\n");
    	printf("1 - Musteri Kayit\n\n");
    	printf("2 - Musteri Giris\n\n");
    	printf("3 - Destek\n\n");
	}
	int hiz = 50;
	system("cls");
	printf("               --Ana Menu--             \n\n");
    sabit();
    printf("               ------------             \n\n");
    Sleep(hiz);
    system("cls");
	printf("             ----Ana Menu----           \n\n");
    sabit();
    printf("             ----------------           \n\n");
    Sleep(hiz);
    system("cls");
	printf("         --------Ana Menu--------       \n\n");
    sabit();
    printf("         ------------------------       \n\n");
    Sleep(hiz);
    system("cls");
	printf("     ------------Ana Menu----------     \n\n");
    sabit();
    printf("     ------------------------------     \n\n");
    Sleep(hiz);
    system("cls");
	printf("-----------------Ana Menu---------------\n\n");
    sabit();
    printf("----------------------------------------\n\n");
    Sleep(hiz);
}