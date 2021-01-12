#include<stdio.h> 

// Function prototype declaration
int sumOfDigits(int num);

int main() 
{ 
    int num;
	
	// Take a number as an input from user
	printf("Enter a number: ");
	scanf("%d", &num);
	 
    int sum = sumOfDigits(num); // Function call
    printf("Sum of digits in %d is %d\n", num, sum);
	 
    return 0; 
}

// Function to calculate the sum of digits of a number using recursion
int sumOfDigits(int num) 
{
    if (num == 0)
       return 0;
    return (num%10 + sumOfDigits(num/10));  // Recursive statement
}

