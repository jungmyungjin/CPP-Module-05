#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern();
	try
	{
		Intern intern1;
		Form *rtn;

//		rtn = intern1.makeForm("RobotomyRequestForm", "mjung");
		rtn = intern1.makeForm("wrongForm", "mjung");
		std::cout << rtn->getFormName() << std::endl;
		std::cout << rtn->getTarget() << std::endl;

	}
	catch(int x)
	{
		if (x == 1)
			std::cout << "The grade 150 is the lowest, so you can't lower the grade any more." << std::endl;
		else if(x == -1)
			std::cout << "Grade 1 is the highest grade, so you can't raise your grade any more." << std::endl;
	}
	catch(const char *str)
	{
		std::cout << str << std::endl;
	}
	catch(std::string str)
	{
		std::cout << str << std::endl;
	}



	return (0);
}
