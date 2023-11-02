#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int sayi;
	scanf("%d", &sayi);
	
	(sayi<0) ? printf("Negatif"):0;
	(sayi>0) ? printf("Pozitif"):0;
	(sayi==0) ? printf("Sifirr"):0;
	
	return 0;
}