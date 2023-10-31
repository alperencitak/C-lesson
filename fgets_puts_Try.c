#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char cumle[50];
	int sayi;
	
	printf("Bir cumle girin : ");
	fgets(cumle, sizeof(cumle), stdin); // güvenli ve kaliteli cümle alma
	
	
	printf("Girdiginiz cumle : ", cumle);
	puts(cumle);
	
	printf("Lutfen bir sayi girin : ");
	scanf("%d",&sayi);
	
	printf("Girdiginiz sayi : %d\n\n", sayi);
	
	return 0;
}