#include <stdio.h>
#define TAXRATE 0.06
int main(void)
{
	float price,quantity,discount;
	printf("Please enter the amount of the price, quantity and discount: \n");
	scanf("%f %f %f",&price,&quantity,&discount);
	printf("The total price is %.2f.\n",quantity*price);
	printf("The total price after discount is %.2f.\n",quantity*price*(1-discount));
	printf("The tax amount is %.2f.\n",quantity*price*(1-discount)*TAXRATE);
	printf("The total payable amount is %.2f.\n",quantity*price*(1-discount)+quantity*price*(1-discount)*TAXRATE);

	return 0;
}