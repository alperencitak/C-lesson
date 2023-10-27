#include <stdio.h>
#include <stdlib.h>

#define BUYUK_SAYI 1000000

int global;

int islemler(int girdi1, int girdi2){
	int l_degisken = 5; // buraya özeldir dışarıda tanımlanırsa hata alınmaz.
	girdi1 += l_degisken;
	girdi2 -= l_degisken;
	
	return girdi1 + girdi2;
}

int main(){
	
	/*
	const int SaatDakikaSayisi = 60;
	const float PI = 3.14;
	
	printf("%d\n",SaatDakikaSayisi);
	printf("%.2f\n",PI);
	
	PI += 5;
	*/
	
	/*
	printf("%d\n",BUYUK_SAYI);
	
	#undef BUYUK_SAYI
	#define BUYUK_SAYI 3000000
	
	printf("%d\n",BUYUK_SAYI);
	*/
	
	
	int a = 10, b= 10, l_degisken = 10;
	
	
	printf("%d\n", l_degisken);
	printf("%d\n", islemler(a,b));
	
	
	
	return 0;
}
