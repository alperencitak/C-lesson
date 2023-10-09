#include <stdio.h>

int main()
{
	while (true){
		int asalKontrol = 0;
		int sayi;
		printf("Bir sayi giriniz : ");
		scanf("%d", &sayi);
		
		for (int i = 2; i <= sayi / 2; i++)
		{
			if (sayi % i == 0){
				asalKontrol = 1;
			}
		}
	
		if (asalKontrol == 1) {
			printf("Sayiniz asal degildir.\n");
		}
		else{
			printf("Sayiniz asaldir.\n");
		}
		printf("\n");
	}
	
	return 0;	
}