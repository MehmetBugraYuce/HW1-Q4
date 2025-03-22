#include <stdio.h>
#include <stdlib.h>

int computeHomeValue(int popularity, int size);

int main(void)
{
    printf("Enter your house popularity\n");
    int popularity;
	scanf("%d", &popularity);
	printf("\nEnter your house size\n");
	int size;
    scanf("%d", &size);
	computeHomeValue(popularity,size);	
	system("pause");
}

int computeHomeValue(int popularity, int size)
{
	int homeValue;
	homeValue = (pow(popularity,3)+pow(size,2))*10000;
    printf("Your household value is %d TL.", homeValue);
}

