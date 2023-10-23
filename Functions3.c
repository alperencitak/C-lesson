#include <stdio.h>
#include <math.h>

int sayiCiftMi(int sayi);

int main(){
	
	int sayi;
	
	while (1) {
		printf("Bir sayi giriniz : ");
	scanf("%d", &sayi);
	if (sayiArmstrongMu(sayi))
		printf("Sayiniz armstrong sayidir.\n\n");
	else
		printf("Sayiniz armstrong sayi degildir.\n\n");
	}
		
	return 0;
}


int sayiArmstrongMu(int sayi){
	int son_basamak, basamak_sayisi, toplam, orijinal_sayi;
	
	orijinal_sayi = sayi;
	basamak_sayisi = (int) log10(sayi) + 1;
	
	while (sayi > 0)
	{
		
		son_basamak = sayi % 10;
		toplam = toplam + round(pow(son_basamak, basamak_sayisi));
		sayi = sayi / 10;
	}
	
	return (orijinal_sayi == toplam);	
}