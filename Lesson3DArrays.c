#include <stdio.h>

int main(){
	
	int sayilar[2][2][3] = { { {1,4,2} , {3,6,8} } , { {7,9,0} , {5,1,6} } };
	
	for (int i = 0; i < 2; i++){
		
		for (int j = 0; j < 2; j++){
			
			for (int k = 0; k < 3; k++){
			
				printf("%d", sayilar[i][j][k]);
			
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}