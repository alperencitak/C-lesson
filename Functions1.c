#include <stdio.h>

float daireAlan(float yaricap){
	return (3 * yaricap * yaricap);
}
float daireCevre(float yaricap){
	return (2 * 3 * yaricap);
}

int main(){
	
	float yaricap, cap, cevre,alan;
	
	printf("Yaricap giriniz : "),
	scanf("%f", &yaricap);
	
	cevre = daireCevre(yaricap);
	alan = daireAlan(yaricap);
	
	printf("Yaricap = %.2f\nAlan = %.2f\nCevre = %.2f\n",yaricap,alan,cevre);

	return 0;
}