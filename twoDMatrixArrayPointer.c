#include<stdio.h>

int main()
{
	int i,j,arr[3][3],sum=0;
	
	int *p = arr; // Intializing pointer "p" to arr[0][0]
	
	// Taking the array elements as inputs from user
	printf("Enter the elements into the 3x3 matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", p);
			p++; // Moving the pointer to next array element
		}
	}
	
	// Inititializing the pointer again to first array element
    p = arr;
	
	// Printing 3x3 array in the original form (matrix form)
    printf("\nOriginal Array:\n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        	// Printing the value pointed by the pointer
        	printf("%d ", *p);
        	p++; // Moving the pointer to next array element	
		}
		printf("\n");
    }
    
    // Inititializing the pointer again to first array element
    p = arr;
    
    // Finding the diagonal elements in the 3x3 array and finding the sum
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        	if(i == j)
        		sum += *p;
        	p++; // Moving the pointer to next array element
		}
    }
    
    // Printing the sum of all the diagonal elements of the array
    printf("Sum of all diagonal elements of the 3x3 array: %d", sum);
}
