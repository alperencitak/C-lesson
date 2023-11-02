#include <stdio.h>
#include <stdlib.h>

#define D1BOYUT 15

int main()
{
	srand(time(0));
	int i, d1[D1BOYUT];
	
	for (i = 0; i < D1BOYUT; i++)d1[i] = rand() % 10;
	bastirVektor(d1);
	
	return 0;
}

void bastirVektor(int vektor[]){
	for (int i = 0; i < D1BOYUT; i++)printf("%d\n", vektor[i]);
}