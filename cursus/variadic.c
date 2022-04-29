// C program for the above approach

#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
int AddNumbers(int n, ...)
{
    int sum = 0;

    va_list args;

    va_start(args, n);
    while(n--)
        sum += va_arg(args, int);
    va_end(args);
    return (sum);
}

// Driver Code
int main()
{
	printf("\n Variadic functions: \n");

	// Variable number of arguments
	printf("\n 1 + 2 = %d ", AddNumbers(2, 1, 2));

	printf("\n 3 + 4 + 5 = %d ", AddNumbers(3, 3, 4, 5));

	printf("\n 6 + 7 + 8 + 9 = %d ", AddNumbers(4, 6, 7, 8, 9));

	printf("\n");

	return 0;
}

