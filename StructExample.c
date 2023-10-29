#include <stdio.h>
#include <stdlib.h>

#define BOYUT 100

typedef struct 
{
	char isim[50];
	float fiyat;
} ilacVerileri;

int main() 
{
	int i, j, ilacSayisi;
	
	printf("Kac tane ilac yazicaginizi giriniz : ");
	scanf("%d", &ilacSayisi);

	ilacVerileri ilac[ilacSayisi];
		
	for(i = 0; i < ilacSayisi; i++)
	{
		printf("%d.ilac ismi : ", i+1);
		scanf("%s", ilac[i].isim);
		printf("%d.ilac fiyati : ", i+1);
		scanf("%f", &ilac[i].fiyat);
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("iLAC     \t FiYAT\n");
	
	for(j = 0; j < ilacSayisi; j++)
	{
		printf("%s\t\t%.2f\n", ilac[j].isim, ilac[j].fiyat);
	}

	return 0;
}
