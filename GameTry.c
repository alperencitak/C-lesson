#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	srand(time(0));
	int pc;
	pc = rand()%3;
    pc +=1; // 1 - 2 - 3
    
	int kullanicipuan1=0;
	int kullanicipuan2=0;
	int secim;
	int tur = 1;
	char a = "Tas";
	char b = "Kagit";
	char c = "Makas";
	while(tur <= 5)
	{
	printf("\n\n%d.Tur...\n",tur);
    
 
	secimyeri:
    printf("\n\nBirini secin... (yanindaki sayiyi yazarak)\n");
	printf("1) Tas\n");
	printf("2) Kagit\n");
	printf("3) Makas\n");
	printf("Secimim : ");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			if (pc == 1){
				printf("Bilgisayarin secimi : Tas\n");
				printf("Berabere\n");
			}
			else if (pc == 2){
				printf("Bilgisayarin secimi : Kagit\n");
				printf("Kaybettin\n");
				kullanicipuan2++;
			}
			else if (pc == 3){
				printf("Bilgisayarin secimi : Makas\n");
				printf("Kazandin\n");
				kullanicipuan1++;
			}
		break;
		case 2:
			if (pc == 1){
				printf("Bilgisayarin secimi : Tas\n");
				printf("Kazandin\n");
				kullanicipuan1++;
			}
			else if (pc == 2){
				printf("Bilgisayarin secimi : Kagit\n");
				printf("Berabere\n");           
			}
			else if(pc == 3){
				printf("Bilgisayarin secimi : Makas\n");
				printf("Kaybettin\n");
				kullanicipuan2++;
			}                      
			break;
		case 3:
			if (pc == 1){
				printf("Bilgisayarin secimi : Tas\n");
				printf("Kaybettin\n");
				kullanicipuan2++;
			}
			else if (pc == 2){
				printf("Bilgisayarin secimi : Kagit\n");
				printf("Kazandin\n");
				kullanicipuan1++;
			}
			else if (pc == 3){
				printf("Bilgisayarin secimi : Makas\n");
				printf("Berabere\n");
			}
			break;
		default:
			goto secimyeri;
			break;
	}                 
	printf("\n-- Puan Durumu --\nOyuncu 1 = %d \nOyuncu 2 = %d",kullanicipuan1,kullanicipuan2);
	tur+=1;
}
	if (kullanicipuan1 < kullanicipuan2){
		printf("\n\nOyuncu 2 kazandi!\n\n");
	}
	else if (kullanicipuan1 > kullanicipuan2){
		printf("\n\nOyuncu 1 kazandi!\n\n");
	}
	else{
		printf("\n\nBeraberlik!\n\n");
	}
	
	return 0;
} 