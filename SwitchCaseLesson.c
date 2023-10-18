#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int gun;
	printf("Haftanin kacinci gunu oldugunu giriniz : ");
	scanf("%d",&gun);
	
	switch(gun){
		case 1: // gun == 1 ise olduğu durum
		printf("Pazartesi");
		break;
		case 2: // gun == 2 ise olduğu durum
		printf("Sali");
		break;
		case 3: // ...
		printf("Carsamba");
		break;
		case 4:
		printf("Persembe");
		break;
		case 5:
		printf("Cuma");
		break;
		case 6:
		printf("Cumartesi");
		break;
		case 7:
		printf("Pazar");
		break;
		default:
		printf("Gecersiz deger!");
		break;
	}
	
	
	return 0;
}