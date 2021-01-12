#include<stdio.h>

int main()
{
	int i,j;
	
	// Nested loops
	for( i=0; i<6; i++ ) // Outer loop
	{
		for( j=0; j<=i; j++ ) // Inner loop
		{
			printf("01"); // 01 pattern
		}
		printf("\n"); // New line 
	}
	
	return 0;
}
