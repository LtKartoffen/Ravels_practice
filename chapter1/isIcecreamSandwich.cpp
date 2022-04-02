#include <iostream>
#include <cstring>
bool isIcecreamSandwich(const char* str);

int main()
{
	std::cout << isIcecreamSandwich("XXDDDDDDDDDDDXX") << std::endl;
	return 0;
}

bool isIcecreamSandwich(const char* str)
{
	char ends, middle;
	middle = '\0';
	bool change_side = false;
	int n1, n2, n3;
	n1 = n2 = n3 = 0;
	int lenght = std::strlen(str);
	ends = str[0];
	if (ends != str[lenght - 1])
		return false;
	for (int i = 0; i < lenght; i++)
	{
		if (!change_side and str[i] == ends)
		{
			n1++;
			continue;
		}
		change_side = true;
		if (change_side and str[i] == ends)
			n3++;
		else if (middle == '\0')
		{
			middle = str[i];
			n2++;
		}
		else if (str[i] == middle)
			n2++;
		else
			return false;
	}
	// Out result
	if (change_side and n1 == n3)
		return true;
	else
		return false;
}
