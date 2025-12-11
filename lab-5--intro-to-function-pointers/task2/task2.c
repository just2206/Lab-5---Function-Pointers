#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int exit_program(int a, int b);

int main(void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	
	// Define operands
	int a = 6;
	int b = 3;
	int x;
	int operation;
	
	// Array of function pointers (including exit as 5th element)
	int (*operations[5])(int, int) = {add, subtract, multiply, divide, exit_program};
	
	// Print operands
	printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
	
	// Get user input
	printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
	scanf("%d", &operation);
	
	// Call the function based on input (no conditionals!)
	x = operations[operation](a, b);
	
	printf("x = %d\n", x);
	
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add(int a, int b) 
{ 
	printf("Adding 'a' and 'b'\n"); 
	return a + b; 
}

int subtract(int a, int b)
{
	printf("Subtracting 'b' from 'a'\n");
	return a - b;
}

int multiply(int a, int b)
{
	printf("Multiplying 'a' and 'b'\n");
	return a * b;
}

int divide(int a, int b)
{
	printf("Dividing 'a' by 'b'\n");
	return a / b;
}

int exit_program(int a, int b)
{
	exit(0);
	return 0;  // Never reached, but needed for return type
}