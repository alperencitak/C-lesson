#include <stdio.h>

int Ters(int sayi){
	int ters = 0;
	
	while (sayi != 0){
	int kalan = sayi % 10;
	ters = ters * 10 + kalan;
	sayi /= 10;
	}
	
	return ters;
}

int main(){
	
	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d", &sayi);
	printf("\n");
	
	printf("%d", Ters(sayi));
	
	
	return 0;
}