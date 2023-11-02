#include <stdio.h>
#include <stdlib.h>

int func1(){
	return 15;
}

void func2(int a){
	printf("%d\n", a);
}

int main()
{
	printf("%d\n", func1());
	func2(func1());
	
	return 0;
}