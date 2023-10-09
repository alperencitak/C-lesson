#include <stdio.h>

int main()
{
	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d", &sayi);
    if (sayi < 10){
    	printf("Sayiniz 10'dan kucuktur.");
	}
	else if(sayi == 10){
		printf("Sayiniz 10'a esittir.");
	}
	else{
		printf("Sayiniz 10'dan buyuktur.");
	}
	
	return 0;
}