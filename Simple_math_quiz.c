#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int randT(int high){
	srand(clock());
	return abs((rand() % high) + 1);
}
int main(){
	printf("please chose the dificulty level: \n(1 = easy , 2 = normal,3 = hard)\n");
	int level, dificulty;
	scanf("%d",&level);
	switch (level){
	case 1:
		dificulty = 50;
		break;
	case 2:
		dificulty = 100;
		break;
	case 3:
		dificulty = 200;
		break;
	default:
		dificulty = 50;
		break;
	}
	int num1, num2, result, ans;
	num1 = randT(dificulty);
	num2 = randT(dificulty);
	result = num1 + num2;
	printf("What is the sum of %d and %d\n",num1,num2);
	scanf("%d",&ans);
	if (ans == result){
		printf("the result is correct.\n");
	}
	else{
		printf("the result is in correct.\n");
	}	
	return 0;
}