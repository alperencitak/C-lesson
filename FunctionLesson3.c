#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
	if (n <= 1)
		return 1;
	else
		return n * factorial(n-1);//5*f(4)  ...// 5*4*f(3)  ...//5*4*3*2*1
}

int main(){
	
	int n;
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	int faktorial_result = factorial(n);
	
	printf("%d Factroial\'s = %d", n, faktorial_result);
	
	return 0;
}
