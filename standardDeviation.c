#include <stdio.h>

int main(){
	
	double dizi[] = {1,2,3,4,5};
	double n = 5;
	
	
	double toplam = 0, ortalama = 0, sonuc=0;
	int i;
	for(i=0;i<n;i++){
		toplam += dizi[i];
	}
	ortalama = toplam/n;
	for(i=0;i<n;i++){
		sonuc += ((dizi[i] - ortalama)*(dizi[i] - ortalama));
	}
	sonuc = sqrt(sonuc/(n-1));
	printf("%f",sonuc);
	
	return 0;
}
