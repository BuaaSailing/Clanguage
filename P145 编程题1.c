/*
#include <stdio.h>
int main(void)
{
	float grade;
	printf("Please enter a number as grade.\n");
	scanf("%f",&grade);
	if (100>=grade && grade>=90)
	{
		printf("A");
	}
	else if (90>grade && grade>=80)
	{
		printf("B");
	}
	else if (80>grade && grade>=70)
	{
		printf("C");
	}
	else if (70>grade && grade>=60)
	{
		printf("D");
	}
	else if (60>grade && grade>=0)
	{
		printf("F");
	}
	else
	{
		printf("Please check your input.\n");
	}

	return 0;
}
*/

#include <stdio.h>
int main(void)
{
	float grade;
	printf("Please enter a number as grade.\n");
	scanf("%f",&grade);
	int con=(int)(grade/10);

	if (grade>100 || grade<0)
	{
		printf("Please check your input.\n" );
	}
	else
	{
		switch (con)
		{
			case 9:
				printf("A");
				break;
			case 8:
				printf("B");
				break;
			case 7:
				printf("C");
				break;
			case 6:
				printf("D");
				break;
			default:
				printf("F");
				break;
		}
	}

	
}
