#include<stdio.h>
#include<time.h>

int main(){
	int a, b;
	b = 0;
	while(b < 10){
		a = clock();
		printf("\n%d",a);
		b++;
	}
	return 0;
}
