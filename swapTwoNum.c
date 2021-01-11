#include<stdio.h>

int main()
{
	int firstNum = 10;
	int secondNum = 5;
	
	printf("Before swapping \n firstNum = %d \n secondNum = %d \n", firstNum, secondNum);
	
	// Swapping
	firstNum = firstNum + secondNum; // firstNum = 10 + 5 = 15
	secondNum = firstNum - secondNum; // secondNum = 15 - 5 = 10
	firstNum = firstNum - secondNum; // firstNum = 15 - 10 = 5
	
	printf("\nAfter swapping \n firstNum = %d \n secondNum = %d", firstNum, secondNum);
	
	return 0;
}
