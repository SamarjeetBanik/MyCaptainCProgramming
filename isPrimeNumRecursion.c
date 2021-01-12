#include<stdio.h>

// Function prototype declaration
int isPrime(int num, int x);
 
int main()
{
    int num, flag;
    
    // Take a number as an input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    flag = isPrime(num, num/2);  // Function call
    
    if (flag == 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    
    return 0;
}

// Function to check a given number is prime or not using recursion 
int isPrime(int num, int x)
{
	if (x == 0)
		return 0;
    if (x == 1)
        return 1;
    else
    {
       if (num % x == 0)
         return 0;
       else
         return isPrime(num, x-1); // Recursive statement
    }
}
