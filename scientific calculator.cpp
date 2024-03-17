// SCIENTIFIC CALCULATOR

#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void sum(float a, float b) // for 1. Arithmetic Operations
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t ADDITION\n\n";
	float c = a + b;
	SetConsoleTextAttribute(console_color, 31);
	cout << "\t" << a << " + " << b << " = " << c <<"\t"<< endl;
}
void sub(float a, float b) // for 1. Arithmetic Operations
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t SUBTRACTION\n\n";
	float c = a - b;
	SetConsoleTextAttribute(console_color, 31);
	cout << "\t" << a << " - " << b << " = " << c << endl;
}
void pro(float a, float b) // for 1. Arithmetic Operations
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t MULTIPLICATION\n\n";
	float c = a * b;
	SetConsoleTextAttribute(console_color, 31);
	cout << "\t" << a << " * " << b << " = " << c << endl;
}
void div(float a, float b) // 1. Arithmetic Operations
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t DIVISION\n\n";
	if (b == 0)
	{
		SetConsoleTextAttribute(console_color, 12);
		cout << "\tERROR!\n";
	}
	else
	{
		float c = a / b;
		SetConsoleTextAttribute(console_color, 31);
		cout << "\t" << a << " / " << b << " = " << c << endl;
	}
}
void squareRoot(float a) // for 2. Square Root
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t SQUARE ROOT\n\n";
	float b = sqrt(a);
	SetConsoleTextAttribute(console_color, 31);
	cout << "\tSquare root of " << a << " = " << b << endl;
}
void absoluteValue(float a) // for 3. Absolute Value
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t ABSOLUTE VALUE\n\n";
	float b = abs(a);
	SetConsoleTextAttribute(console_color, 31);
	cout << "\tAbsolute Value of " << a << " = " << b << endl;
}
void power(float a, float b) // for 4. Power
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t POWER\n\n";
	float c = pow(a, b);
	SetConsoleTextAttribute(console_color, 31);
	cout << "\t" << a << " to the power " << b << " = " << c << endl;
}
void sine(float a) // 5. sine Function
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t SINE\n\n";
	float b = sin(a);
	SetConsoleTextAttribute(console_color, 31);
	cout << "\tsin(" << a << ") = " << b << endl;
}
void cosine(float a) // 5. cosine Function
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t COSINE\n\n";
	float b = cos(a);
	SetConsoleTextAttribute(console_color, 31);
	cout << "\tcos(" << a << ") = " << b << endl;
}
void tangent(float a) // 5. tangent Function
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t TANGENT\n\n";
	float b = tan(a);
	SetConsoleTextAttribute(console_color, 31);
	cout << "\ttan(" << a << ") = " << b << endl;
}
void logarthmic(float a) // 6. Logarthmic Function
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\t LOGARTHM\n\n";
	float b = log(a);
	SetConsoleTextAttribute(console_color, 31);
	cout << "\tlog(" << a << ") = " << b << endl;
}
//MAIN FUNCTION
int main()
{
	HANDLE console_color; 
    console_color = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(console_color, 3);
	int choice;
	cout << "\n\tSCIENTIFIC CALCULATOR\t(enter \'0\' to stop calculating)\n";
	do
	{
		SetConsoleTextAttribute(console_color, 1);
		cout << "\n\t1. Arithmetic Operations\n";
		SetConsoleTextAttribute(console_color, 2);
		cout << "\t2. Square Root\n";
		SetConsoleTextAttribute(console_color, 9);
		cout << "\t3. Absolute Value\n";
		SetConsoleTextAttribute(console_color, 11);
		cout << "\t4. Power\n";
		SetConsoleTextAttribute(console_color, 5);
		cout << "\t5. Trigonometric Function\n";
		SetConsoleTextAttribute(console_color, 6);
		cout << "\t6. Logarthmic Function\n\n";
		SetConsoleTextAttribute(console_color, 3);
		cout << "\tEnter your choice: ";
		cin >> choice;

		// 1. Arithmetic Operations
		if (choice == 1)
		{
			SetConsoleTextAttribute(console_color, 1);
			float a, b, c;
			char op;

			cout << "\tEnter 1st number: ";
			cin >> a;
			cout << "\tEnter 2nd number: ";
			cin >> b;
			cout << "\tEnter operator: ";
			cin >> op;

			if (op == '+')
			{
				sum(a, b);
			}
			else if (op == '-')
			{
				sub(a, b);
			}
			else if (op == '*')
			{
				pro(a, b);
			}
			else if (op == '/')
			{
				div(a, b);
			}
			else
			{
				SetConsoleTextAttribute(console_color, 12);
				cout << "\n\t Invalid operator \n";
			}
		}
		// 2. Square Root
		else if (choice == 2)
		{
			SetConsoleTextAttribute(console_color, 2);
			float a;
			char ch;
			cout << "\tEnter a positive number: ";
			cin >> a;

			squareRoot(a);
		}
		// 3. Absolute Value
		else if (choice == 3)
		{
			SetConsoleTextAttribute(console_color, 9);
			float a;
			cout << "\tEnter a positive number: ";
			cin >> a;

			absoluteValue(a);
		}
		// 4. Power
		else if (choice == 4)
		{
			SetConsoleTextAttribute(console_color, 11);
			float a, b, c;

			cout << "\tEnter base number: ";
			cin >> a;
			cout << "\tEnter exponantial number: ";
			cin >> b;

			power(a, b);
		}
		// 5. Trigonometric Function
		else if (choice == 5)
		{
			SetConsoleTextAttribute(console_color, 5);
			int choice;
			cout << "\n\t TRIGINIMETRY FUNCTION\n\n";
			cout << "\t1. Sine\n";
			cout << "\t2. Cosine\n";
			cout << "\t3. Tangent\n\n";
			cout << "\tEnter your choice: ";
			cin >> choice;
			if (choice == 1)
			{
				float a;
				cout << "\tEnter an angle: ";
				cin >> a;
				sine(a);
			}
			else if (choice == 2)
			{
				float a;
				cout << "\tEnter an angle: ";
				cin >> a;
				cosine(a);
			}
			else if (choice == 3)
			{
				float a;
				cout << "\tEnter an angle: ";
				cin >> a;
				tangent(a);
			}
			else
			{
				SetConsoleTextAttribute(console_color, 12);
				cout << "\n\tInvalid choice  \n";
			}
		}
		else if (choice == 6)
		{
			SetConsoleTextAttribute(console_color, 6);
			float a;
			cout << "\tEnter a number: ";
			cin >> a;

			logarthmic(a);
		}
		else
		{
			SetConsoleTextAttribute(console_color, 12);
			cout << "\n\tYOU CAN ONLY PERFORM \n";
			cout << "\t1. Arithmetic Operations\n";
			cout << "\t2. Square Root\n";
			cout << "\t3. Absolute Value\n";
			cout << "\t4. Power\n";
			cout << "\t5. Trigonometric Function\n";
			cout << "\t6. Logarthmic Function\n";
		}
	} while (choice != 0);

	// Factorial
	// Absolute Value
	// Degrees to Radians and Radians to Degrees Conversion
	// Error Handling: Include error handling for division by zero, invalid input, or out-of-range results.

	return 0;
}