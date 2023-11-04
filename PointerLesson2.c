#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int d1,d2,*p1;
    d1 = 1453;
    p1 = &d1;
    
    printf("Degisken adres : %d\n", &d1);
 	printf("Degisken deger : %d\n\n", d1);
 	
    printf("Pointer adres : %d\n", &p1);
 	printf("Pointer tuttugu deger : %d\n", *p1);
 	printf("Pointer deger : %d\n\n", p1);
 	
 	*p1 = 1071;
 	
 	printf("Pointer adres : %d\n", &p1);
 	printf("Pointer tuttugu deger : %d\n", *p1);
 	printf("Pointer deger : %d\n\n", p1);
 	
 	d1 = 100;
 	
 	printf("Degisken adres : %d\n", &d1);
 	printf("Degisken deger : %d\n\n", d1);
    
    return 0;
}