#include <stdio.h>
int main(void)
{
	int num1,num2;
	int tot=0;
	printf("Please enter a two-digit number:\n");
	scanf("%1d%1d",&num1,&num2);
	switch (num1)
	{
		case 1:
			switch (num2)
			{
				case 1:
					printf("You entered the number eleven.\n");
					break;
				case 2:
					printf("You entered the number twelve.\n");
					break;
				case 3:
					printf("You entered the number thirteen.\n");
					break;
				case 4:
					printf("You entered the number fourteen.\n");
					break;
				case 5:
					printf("You entered the number fifteen.\n");
					break;
				case 6:
					printf("You entered the number sixteen.\n");
					break;
				case 7:
					printf("You entered the number seventeen.\n");
					break;
				case 8:
					printf("You entered the number eighteen.\n");
					break;
				case 9:
					printf("You entered the number nineteen.\n");
					break;
				case 0:
					printf("You entered the number ten.\n");
					break;
			}
			tot=1;
			break;
		case 2:
			printf("You entered the number twenty");
			break;
		case 3:
			printf("You entered the number thirty");
			break;
		case 4:
			printf("You entered the number forty");
			break;
		case 5:
			printf("You entered the number fifty");
			break;
		case 6:
			printf("You entered the number sixty");
			break;
		case 7:
			printf("You entered the number seventy");
			break;
		case 8:
			printf("You entered the number eighty");
			break;
		case 9:
			printf("You entered the number ninety");
		default:
			break;
	}
	if (0==tot)
	{
		switch (num2)
		{
			case 1:
				printf(" one");
				break;
			case 2:
				printf(" two");
				break;
			case 3:
				printf(" three");
				break;
			case 4:
				printf(" four");
				break;
			case 5:
				printf(" five");
				break;
			case 6:
				printf(" six");
				break;
			case 7:
				printf(" seven");
				break;
			case 8:
				printf(" eight");
				break;
			case 9:
				printf(" nine");
				break;
			default:
				break;
		}
		printf(".");
	}


	return 0;
}