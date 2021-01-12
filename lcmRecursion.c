#include <stdio.h> 

// Function prototype declaration
int gcd(int a, int b);
int lcm(int a, int b); 
 
int main()
{
	int num1, num2, result;
	
	// Take two numbers as inputs from user
    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);
    
    result = lcm(num1, num2); // Function call
    printf("Lcm of %d and %d is %d.", num1, num2, result);
    
    return 0; 
}

// Recursive function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0)
        return b; 
    return gcd(b % a, a); 
} 

// Function to return LCM of two numbers 
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b;
}
