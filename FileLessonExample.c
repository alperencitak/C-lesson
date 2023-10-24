#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int bolunen = 20;
	int bolen = 0;
	int sonuc;
	
	if (bolen == 0){
		fprintf(stderr, "Sifira bolme hatasi! Programdan cikiliyor...\n"); // stderr : standart hata akışı
		exit(-1); // exit(EXIT_FAILURE);
	}
	
	sonuc = bolunen / bolen;
	fprintf(stderr, "Sonuc : %d\n", sonuc);
	
	exit(0); // exit(EXIT_SUCCESS);
	
	return 0;
}