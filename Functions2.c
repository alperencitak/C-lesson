#include <stdio.h>

int sayiCiftMi(int sayi){
	
	if ((sayi % 2) == 0)
		return 1;
	else	
		return 0;
}

int main(){
	
	int sayi;
	
	while(1){
		printf("Bir sayi giriniz : ");
		scanf("%d", &sayi);
	
		if(sayiCiftMi(sayi) == 1)
			printf("Sayi cift.\n\n");
		else
			printf("Sayi tek.\n\n");
	}
	
	return 0;
}