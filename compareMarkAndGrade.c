#include<stdio.h>

int main()
{
	int mark; 
	
	// Take a mark as an input from user to assign a grade
	printf("Enter a mark: ");
	scanf("%d", &mark);
	
	// Comparison and Grade printing
	if(mark>=85 && mark<=100)
		printf("Grade A");
	else if(mark>=70 && mark<85)
		printf("Grade B");
	else if(mark>=55 && mark<70)
		printf("Grade C");
	else if(mark>=40 && mark<55)
		printf("Grade D");
	else
		printf("Grade F");
		
	return 0;
}
