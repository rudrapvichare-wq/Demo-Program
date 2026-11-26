#include <stdio.h>

int main(void)
{
	char choice;
	double a, b, c;

	do
	{
		printf("\n1. Add\n");
		printf("2. Subtract\n");
		printf("3. Divide\n");
		printf("4. Multiply\n");
		printf("5. Exit\n");
		printf("Choose an option: ");
		scanf(" %c", &choice);

		if (choice >= '1' && choice <= '4')
		{
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
		}

		switch (choice)
		{
		case '1':
			c = a + b;
			printf("Result: %.2f\n", c);
			break;
		case '2':
			c = a - b;
			printf("Result: %.2f\n", c);
			break;
		case '3':
			switch (b == 0)
			{
			case 1:
				printf("Cannot divide by zero.\n");
				break;
			case 0:
				c = a / b;
				printf("Result: %.2f\n", c);
				break;
			}
			break;
		case '4':
			c = a * b;
			printf("Result: %.2f\n", c);
			break;
		case '5':
			break;
		default:
		{
			printf("Invalid option. Try again.\n");
		}
		}
	}
while (choice != '5');
printf("Thank You");
	return 0;
}
/* Algorithm
Start.
1.Declare variables choice, a, b, and c.
2.Display the menu:
	1.Add
	2.Subtract
	3.Divide
	4.Multiply
	5.Exit
3.Read the user’s choice.
4.Use switch(choice):
	i>Case 1: Read a and b, calculate c = a + b, and display c.
	Case 2: Read a and b, calculate c = a - b, and display c.
	Case 3: Read a and b.
	If b == 0, display “Cannot divide by zero.”
	else calculate c = a / b and display c.
	Case 4: Read a and b, calculate c = a * b, and display c.
	Case 5: Exit.
	ii>Default: Display “Invalid option.”
5.Repeat steps 3–5 until the user chooses 5.
  Print Thank You
6.Stop.

*/