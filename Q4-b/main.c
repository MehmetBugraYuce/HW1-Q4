#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int popularity;
int size;
int value;
	

void computeHouseValue(){
	printf("Enter your house's popularity as an integer\n");
	scanf("%d", &popularity);
	printf("\nEnter your house's size as an integer\n");
	scanf("%d", &size);
	value = popularity*popularity*popularity*10000+size*size*10000;
	printf("Your house's value is %d TL", value);
}


int main(void)
{
computeHouseValue();
return 0;
}


