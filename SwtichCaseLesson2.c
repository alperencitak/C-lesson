#include <stdio.h>
#include <stdbool.h>

int main(){
	
	float sayi1,sayi2,sonuc;
	char islem;
	printf("Islemi su sekilde belirtin. [sayi 1] [+ - * /] [sayi 2] \n");
	scanf("%f %c %f", &sayi1, &islem, &sayi2);
	printf("\n\n...\n\n");
	
	switch(islem){
		case '+':
			sonuc = sayi1 + sayi2;
			break;
		case '-':
			sonuc = sayi1 - sayi2;
			break;
		case '*':
			sonuc = sayi1 * sayi2;
			break;
		case '/':
			sonuc = sayi1 / sayi2;
			break;
		default:	
		printf("Gecersiz islem!");
		break;
	}
	
	printf("Sonuc = %.2f", sonuc);
	
	
	return 0;
}