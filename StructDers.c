#include <stdio.h>
#include <string.h>

union Veri {
	int i;
	float f;
	char str[20];
};

int main()
{

	union Veri veri;
	
	veri.i = 10;
	veri.f = 22.5;
	strcpy(veri.str, "Selam");
	
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri));
	printf("veri.i : %d\n", veri.i);
	printf("veri.f : %.2f\n", veri.f);
	printf("veri.str : %s\n", veri.str);
	printf("\n...\n\n");
	
	veri.i = 103;
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri));
	printf("veri.i : %d\n", veri.i);
	printf("veri.f : %.2f\n", veri.f);
	printf("veri.str : %s\n", veri.str);
	printf("\n...\n\n");
	
	veri.f = -203.5;
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri));
	printf("veri.i : %d\n", veri.i);
	printf("veri.f : %.2f\n", veri.f);
	printf("veri.str : %s\n", veri.str);
	printf("\n...\n\n");
	
	return 0;
}