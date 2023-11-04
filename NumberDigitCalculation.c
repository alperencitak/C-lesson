#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int basamakSayisi();

int main() 
{
    int sayi;
    
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);
    
    basamakSayisi(sayi);
    
    
    return 0;
}

int basamakSayisi(int n){
	
	int basamak = 0;
	
	for (int i = 10; i > 1; i*=10){
		basamak+=1;
		if(n / i == 0){
			printf("Girdiginiz sayi %d basamaklidir", basamak);
			break;
		}
	}
	
}