#include <stdio.h><stdlib.h><string.h>

int main(){

	int x=2,y=5;
	
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	
	x=x+y; // x x+y y y
	y=x-y; // x x+y y x
	x=x-y; // x y y x
	
	printf("\nYer Degistirildi.\n\n");
	
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	return 0;
}