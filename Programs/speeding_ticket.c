#include<stdio.h>
int main()
{
	int speed;
	printf("\nEnter the speed of vehicle as an integer = ");
	scanf("%d",&speed);
	speed=(speed<=65) ? (65) : (speed<=70) ? (70) : (90) ;
	switch(speed)
	{
		case 65: printf("\n No speeding Ticket \n\n"); break;
		case 70: printf("\n Speeding Ticket \n\n"); break;
		case 90: printf("\n Excessive Speeding Ticket \n\n"); break;
		default : printf("\n Incorrect Speed\n\n"); break;

	}
	printf("\n\n");
	return 0;
}
