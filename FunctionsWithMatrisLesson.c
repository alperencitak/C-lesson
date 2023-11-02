#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIZIBOYUTX 4
#define DIZIBOYUTY 3
#define DIZIBOYUTZ 2

void bastirDizi(int matris[DIZIBOYUTZ][DIZIBOYUTY][DIZIBOYUTX]){
	for (int z = 0; z < DIZIBOYUTZ; z++)
		for (int y = 0; y < DIZIBOYUTY; y++)
			for (int x = 0; x < DIZIBOYUTX; x++)printf("%d\n", matris[z][y][x]);
}

int main()
{
	srand(time(0));
	int dizi[DIZIBOYUTZ][DIZIBOYUTY][DIZIBOYUTX];
	
	for (int z = 0; z < DIZIBOYUTZ; z++)
		for (int y = 0; y < DIZIBOYUTY; y++)
			for (int x = 0; x < DIZIBOYUTX; x++)dizi[z][y][x] = rand() % 10;
			
	bastirDizi(dizi);
	
	return 0;
}