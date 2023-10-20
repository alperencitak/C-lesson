#include <stdio.h>
#include <stdbool.h>

int main(){
	
	for (int j =1; j <=10; j++)
	{
		if(j==5){
			break; // 5 olunca döngüyü kır ve çık.
		}
		printf("%d\n",j);
	}
	
	printf("\n\n");
	
	for (int i =1; i <=10; i++)
	{
		if(i==5){
			continue; // 5 olunca döngüyü i = 5 için kır ancak döngüden çıkma.
		}
		printf("%d\n",i);
	}
	
	
	return 0;
}