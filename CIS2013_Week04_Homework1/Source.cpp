#include<iostream>
using namespace std;


void addIt(int x, int y)
{
	cout << "If you add them together, you get " << (x + y);
}

void subtractIt(int x, int y)
{
	cout << "If you subtract the first number from the second, you get " << (x - y);
}

void multiplyIt(int x, int y)
{
	cout << "If you multiply them together, you get " << (x * y);
}

void divideIt(int x, int y)
{
	cout << "If you divide the first number by the second, you get " << (x / y);
}

void modulusIt(int x, int y)
{
	cout << "If you modulus the first number by the second, you get " << (x % y) << endl;
	cout << "Confused? The modulus is the remainder number after dividing the first number by the second number, so your first number should be larger, or else it will divide 0 times and the remainder will just be equal to the first number.";
}

void rootIt(int x)
{
	cout << "If square root the first number, you get " << (sqrt(x));
}


int main()
{
	char play_again = 'y';
	while (play_again == 'y')
	{
		int x, y;
		char symbol;

		cout << "Enter the first number: ";
		cin >> x;
		cout << "What do you want to do? (Add, subtract, multiply, divide, modulus, or square root.) Use + - * / % or s: ";
		cin >> symbol;
		
		if (symbol == 's')
		{
			cout << endl;
			rootIt(x);
		}
		else
		{
			cout << "Enter the second number: ";
			cin >> y;
			cout << endl;

			switch (symbol)
			{
			case '+':
				addIt(x, y);
				break;
			case '-':
				subtractIt(x, y);
				break;
			case '*':
				multiplyIt(x, y);
				break;
			case '/':
				divideIt(x, y);
				break;
			case '%':
				modulusIt(x, y);
				break;
			default:
				cout << "You must use one of these operators! + - * / % or s ";
			}
		}
		cout << endl;

		 // ask to restart
		cout << "Play again? (Type y for yes.) ";
		cin >> play_again;
		cout << endl;
	}
	return 0;
}
