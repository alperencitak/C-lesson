#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
};

int main()
{
	int istenilen = 3;
	struct Student student[3];
	for (int i = 0; i < istenilen; i++){
		
		printf("isim giriniz : ");
		scanf("%s", student[i].name);
		
		printf("Yas giriniz : ");
        scanf("%d", &student[i].age);
		
		printf("\n");
		
	}
	
	for (int j = 0; j < istenilen; j++){
		
		printf("%d . Kisi : %s  -  %d \n\n",j+1,student[j].name,student[j].age);
		
	}

	
	return 0;
}