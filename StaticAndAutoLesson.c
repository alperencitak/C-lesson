#include <stdio.h>
#include <stdlib.h>

void fonk1(){
	int a = 0;
	a++;
	printf("fonk1 a degeri = %d\n\n", a);
	printf("fonk1 a bellek degeri = %d\n\n", &a);
}
void fonk2(){
	auto int a = 0;
	a++;
	printf("fonk2 a degeri = %d\n\n", a);
	printf("fonk2 a bellek degeri = %d\n\n", &a);
}
void fonk3(){
	static int a = 0;
	a++;
	printf("fonk3 a degeri = %d\n\n", a);
	printf("fonk3 a bellek degeri = %d\n\n", &a);
}

int main()
{
	fonk1();
	fonk2();
	fonk3();
	
	fonk2();
	fonk1();
	fonk3();
	
	fonk1();
	fonk3();
	fonk2();
	
	
	return 0;
}