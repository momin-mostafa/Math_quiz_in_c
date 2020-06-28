#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int randT(int high)
{
	srand(clock());
	return abs((rand() % high) + 1);
}
int main()
{
	printf("please chose the dificulty level: \n(1 = easy , 2 = normal,3 = hard)\n");
	int level, dificulty;
	scanf("%d", &level);
	switch (level)
	{
	case 1:
		dificulty = 50;
		break;
	case 2:
		dificulty = 100;
		break;
	case 3:
		dificulty = 2000;
		break;
	default:
		dificulty = 50;
		break;
	}

	int num1, num2, result, ans, score, total;
	char a;

	score = 0;
	total = 1;

	do
	{
		num1 = randT(dificulty);
		num2 = randT(dificulty);
		result = num1 + num2;
		printf("What is the sum of %d and %d\n", num1, num2);
		scanf("%d", &ans);
		if (ans == result)
		{
			printf("the result is correct.\n");
			printf("Your score is %d / %d\n", ++score, total++);
			printf("Do you want to continue(to continue press 'y')\n");
			scanf(" %c", &a);
		}
		else
		{
			printf("the result is incorrect.\n");
			printf("Your score is %d / %d\n", score, total);
			printf("Do you want to continue?(to continue enter 'y')\n");
			scanf(" %c", &a);
			total++;
		}
	} while (a == 'y');
	return 0;
}
