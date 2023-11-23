#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    
    int frekans[11] = {0};
    int dizi[20] = {1,2,1,1,0,6,8,10,4,4,4,4,4,6,9,8,3,3,3,7};
    int i,j;
    
    for(i = 0;i<20;i++)
	{
    	frekans[dizi[i]]++;
	}
	
	for(j=0;j<11;j++){
		printf("%d\n",frekans[j]);
	}
    
    return 0;
}