#include<stdio.h>

int main()
{
	int choice;
	
	// Menu
	printf("--------------MENU---------------\n");
	printf("1. Pizza, Rs. 239\n");
	printf("2. Burger, Rs. 129\n");
	printf("3. Pasta, Rs. 179\n");
	printf("4. French Fries, Rs. 99\n");
	printf("5. Sandwich, Rs. 149\n");
	printf("---------------------------------\n");
	
	// Take the choice as an input from user
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	
	// switch-case conditional block
	switch(choice)
	{
		case 1:
			printf("Food name: Pizza\nPrice: Rs. 239");
			break;
		case 2:
			printf("Food name: Burger\nPrice: Rs. 129");
			break;
		case 3:
			printf("Food name: Pasta\nPrice: Rs. 179");
			break;
		case 4:
			printf("Food name: French Fries\nPrice: Rs. 99");
			break;
		case 5:
			printf("Food name: Sandwich\nPrice: Rs. 149");
			break;
		default:
			printf("Wrong input (Please choose between 1-5)");
	}
	
	return 0;
}
