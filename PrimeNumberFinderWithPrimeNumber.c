#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int sayi;
	printf("Sayi giriniz : ");
	scanf("%d",&sayi);
	int dizi[sayi],i,j,kontrol=0,index=1,durum=1;
	dizi[0] = 2;
	
	
	for(i = 3; i <= sayi; i++){
		kontrol=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				kontrol = 1;
				break;
			}
		}
		if(kontrol==0){
			dizi[index] = i;
			index++;
		}
	}

	kontrol=0;
	
	for(i=0;i<index-1;i++){
		if(sayi%dizi[i]==0){
			kontrol=1;
			break;
		}	
	}
	
	if(kontrol==0){
		printf("Sayiniz asal");
	}
	else{
		printf("Sayiniz asal degil");
	}
	
	return 0;
}
