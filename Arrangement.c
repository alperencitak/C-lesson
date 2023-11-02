#include <stdio.h>
#include <stdlib.h>

void siralama(int x, int y, int z);

int main()
{
	int sayi1,sayi2,sayi3;
	
	printf("Siralamak istediginiz sayilari aralarinda bosluk birakarak giriniz : ");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	
	siralama(sayi1,sayi2,sayi3);
	
	
	return 0;
}

void siralama(int x, int y, int z){
	int geciciSayi;
	for (int i = 0; i < 3; i++){
		if (x > y){
			geciciSayi = x;
			x = y;
			y = geciciSayi;
		}
		
		else if (y > z){
			geciciSayi = y;
			y = z;
			z = geciciSayi;
		}
		
		else if (x > y){
			geciciSayi = x;
			x = y;
			y = geciciSayi;
		}
	}
	printf("Siralama sonucu : %d - %d - %d",x,y,z);
}