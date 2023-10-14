#include <stdio.h>
#include <string.h>

int Factorial(int sayi){
	int F = 1;
	for (int i = 1; i <= sayi; i++){
		F *= i;
	}
	return F; // Fonksiyona girilen sayı = F mantığı vardır.
}


int main()
{
	
	while (1){
		int sayi;
		printf("Enter a number : ");
		scanf("%d", &sayi);
		
		int sonuc = Factorial(sayi);
		
		printf("Factorial of the number your entered : %d", sonuc);
		printf("\n\n...\n\n");
	}
	
	
	return 0;
}