#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
//		Bureaucrat human("name", 1150);
//		Bureaucrat human("name", -1);
//		Bureaucrat human("name", 150);
//		human.setDecreaseGrade();
//		Bureaucrat human("name", 0);
//		human.setIncreaseGrade();

		Bureaucrat human("name", 3);
		std::cout << human << std::endl;
	}
	catch (const char *str)
	{
		std::cout << str << std::endl;
	}

	return (0);
}
