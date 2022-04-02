#include <iostream>

int main()
{
	double temp;
	double min;
	bool success = false;
	bool input = false;
	std::cout << "Enter a sequence of only positive numbers and I'll find the minimun(enter <q> to quit):\n";
	while (std::cin >> temp)
	{
		if (temp <= 0)
		{
			std::cout << "Invalid input. Entered negative number! Try again:\n";
			success = false;
			input = false;
			while (std::cin.get() != '\n');
		}
		else if (!success)
		{
			min = temp;
			success = true;
			input = true;
		}
		else
		{
			min = (temp <= min) ? temp : min;
			input = true;
		}
	}
	if (input)
		std::cout << "Minimum: " << min << std::endl;
	else
		std::cout << "No input data!\n";
	return 0;
}
