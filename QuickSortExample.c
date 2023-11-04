#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int siralama(int elemanSayisi, int geciciSayiF, int dizi[]);
int elemanBelirle(int elemanSayisi, int dizi[]);

int main() 
{
    int elemanSayi,geciciSayi;
	printf("Dizinin eleman sayisini giriniz : ");
	scanf("%d", &elemanSayi);
	int sayiDizisi[elemanSayi];
	
    elemanBelirle(elemanSayi,sayiDizisi);
    siralama(elemanSayi, geciciSayi, sayiDizisi);
    
    return 0;
}

int siralama(int elemanSayisi, int geciciSayiF, int dizi[]){
	for (int i = 0; i <= elemanSayisi; i++ ){
    	for(int j = 0; j < elemanSayisi; j++){
    			if (dizi[j] > dizi[j+1] && dizi[j+1] != NULL){
    				geciciSayiF = dizi[j];
    				dizi[j] = dizi[j+1];
    				dizi[j+1] = geciciSayiF;
				}
		}
	}
	
	for (int k = 0; k < elemanSayisi; k++){
		printf("%d", dizi[k]);
		if (dizi[k] != dizi[elemanSayisi - 1])printf(" - ");
	}
}

int elemanBelirle(int elemanSayisi, int dizi[]){
	for (int i = 0; i < elemanSayisi; i++){
		printf("%d.Elemani giriniz : ", i+1);
		scanf("%d", &dizi[i]);
	}
}