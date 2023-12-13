#include <stdio.h><stdlib.h><string.h><unistd.h><time.h>

void anaMenuAnimation();
void oyunlarMenuAnimation();
void uygulamalarMenuAnimation();

int main() 
{
	int islemAnaMenu;
	
	anaMenuAnimation();
	
	printf("\n\n  ? - ");
	scanf("%d",&islemAnaMenu);
	
	system("cls");
	
	switch(islemAnaMenu)
	{
		case 1:
			oyunlarMenuAnimation();
			break;
		
		case 2:
			uygulamalarMenuAnimation();
			break;
			
		case 3:
			break;
			
	}
	
    
    return 0;
}

void anaMenuAnimation(){
	
	void anaMenuSabit(){
		printf("\n  Yapmak istediginiz islemi seciniz.\n\n");
		printf("  1 - Oyunlar\n");
		printf("  2 - Uygulamalar\n");
		printf("\n\n");
	}
	
	int i,j;
	
	for(i=0;i<15;i++){
		for(j=0;j<15-i;j++)printf(" ");
		for(j=0;j<i;j++)printf("-");
		printf("Ana Menu");
		for(j=0;j<i;j++)printf("-");
		for(j=0;j<15-i;j++)printf(" ");
		printf("\n");
		anaMenuSabit();
		for(j=0;j<15-i;j++)printf(" ");
		for(j=0;j<i;j++)printf("-");
		printf("--------");
		for(j=0;j<i;j++)printf("-");
		for(j=0;j<15-i;j++)printf(" ");
		Sleep(15);
		if(i!=14)system("cls");
	}
	
}

void oyunlarMenuAnimation(){
	void oyunMenu(){
		char oyunMenuMetin[] = "  Oyun seciniz.";
		char oyunMenuMadde1[] = "  1 - ";
		char oyunMenuMadde2[] = "  2 - ";
		char oyunMenuMadde3[] = "  3 - ";
		int x;
		
		printf("\n\n");
		for(x=0;x<strlen(oyunMenuMetin);x++){
			printf("%c",oyunMenuMetin[x]);
			Sleep(40);
		}printf("\n\n");
		for(x=0;x<strlen(oyunMenuMadde1);x++){
			printf("%c",oyunMenuMadde1[x]);
			Sleep(40);
		}printf("\n");
		for(x=0;x<strlen(oyunMenuMadde2);x++){
			printf("%c",oyunMenuMadde2[x]);
			Sleep(40);
		}printf("\n");
		for(x=0;x<strlen(oyunMenuMadde3);x++){
			printf("%c",oyunMenuMadde3[x]);
			Sleep(40);
		}printf("\n\n");
	}
	
	int i,j;
	
	for(i=0;i<15;i++){
		for(j=0;j<15-i;j++)printf(" ");
		for(j=0;j<i;j++)printf("#");
		printf(" OYUNLAR ");
		for(j=0;j<i;j++)printf("#");
		for(j=0;j<15-i;j++)printf(" ");
		Sleep(25);
		if(i!=14)system("cls");
	}
	oyunMenu();
}

void uygulamalarMenuAnimation(){
	void uygulamaMenu(){
		char uygulamaMenuMetin[] = "  Uygulama seciniz.";
		char uygulamaMenuMadde1[] = "  1 - ";
		char uygulamaMenuMadde2[] = "  2 - ";
		char uygulamaMenuMadde3[] = "  3 - ";
		int x;
		
		printf("\n\n");
		for(x=0;x<strlen(uygulamaMenuMetin);x++){
			printf("%c",uygulamaMenuMetin[x]);
			Sleep(40);
		}printf("\n\n");
		for(x=0;x<strlen(uygulamaMenuMadde1);x++){
			printf("%c",uygulamaMenuMadde1[x]);
			Sleep(40);
		}printf("\n");
		for(x=0;x<strlen(uygulamaMenuMadde2);x++){
			printf("%c",uygulamaMenuMadde2[x]);
			Sleep(40);
		}printf("\n");
		for(x=0;x<strlen(uygulamaMenuMadde3);x++){
			printf("%c",uygulamaMenuMadde3[x]);
			Sleep(40);
		}printf("\n\n");
	}
	
	int i,j;
	
	for(i=0;i<15;i++){
		for(j=0;j<15-i;j++)printf(" ");
		for(j=0;j<i;j++)printf("#");
		printf(" UYGULAMALAR ");
		for(j=0;j<i;j++)printf("#");
		for(j=0;j<15-i;j++)printf(" ");
		Sleep(25);
		if(i!=14)system("cls");
	}
	uygulamaMenu();
}
