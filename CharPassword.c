#include <stdio.h>
#include <stdlib.h>
#include <string.h>
     
int main() 
{
    char harfler[] = "abcdefghijklmnoprstuvyz";
    
    char harf;
	int kaydirma;
    
	printf("Kaydirmak istediginiz harfi girin : ");
	scanf("%c", &harf);

	printf("Harfi ne kadar kaydirmak istersiniz : ");
	scanf("%d", &kaydirma);
	
	int k;
	for(k=0;k<23;k++){
		if (harfler[k] == harf){
			break;
		}
	}
	
	kaydirmaayari:
		kaydirma = k + kaydirma + 1;
	if (kaydirma > 23){
		kaydirma -= 23;
		goto kaydirmaayari;
	}
	
	char sifreliHarf = harfler[kaydirma];
	
	printf("Girdiginiz harfin sifreli hali : %c", sifreliHarf);
	
	
	return 0;
}