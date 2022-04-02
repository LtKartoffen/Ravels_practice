#include <iostream>
const char* months[] = { "January","February","March","April","May","June","July","Auguts","September","October","November","December" };
enum MONTHS { jan, feb, march, april, may, june, july, aug, sept, oct, nov, dec };
inline void out(const char* ch)
{
	std::cout << ch << std::endl;
}
int main()
{
	MONTHS index;
	std::cout << "Enter a number(from 1 to 12): ";
	int* choose = new int;
	do
		std::cin >> *choose;
	while (*choose > 12 or *choose<1);
	index = MONTHS(*choose-1);
	delete choose;
	out(months[index]);
	return 0;
}
