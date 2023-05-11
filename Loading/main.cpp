#include <iostream>

char process = 219;
char space = ' ';

// Function Prototype
void Delay(int x);
void LoadingType1();
void LoadingType2();

// Functions
int main()
{
	std::cout << '\n';
	std::cout.width(40);
	std::cout << "loading style 1\n";
	LoadingType1();

	std::cout << "\n\n";
	std::cout.width(40);
	std::cout << "loading style 2\n";
	LoadingType2();
	
	std::cout << "\n\n";

	return 0;
}

void Delay(int x)
{
	for (int i = 0; i <= x; i++)
	{
		for (int z = 0; z <= x; z++)
		{
			//loop
		}
	}
}

void LoadingType1()
{
	std::cout.width(20);
	for (int i = 0; i < 25; i++)
	{
		Delay(9500);
		std::cout << process;
	}
}

void LoadingType2()
{
	std::cout.width(20);
	for (int i = 0; i < 13; i++)
	{
		Delay(9500);
		std::cout << process << space;
	}
}


