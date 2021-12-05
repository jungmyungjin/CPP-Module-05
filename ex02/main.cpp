#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat human("oliver",140);
		ShrubberyCreationForm myTree("mjung");
		RobotomyRequestForm robotomy("tommy");
		PresidentPardonForm pardon("nice dog");

		std::cout << human << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << myTree << std::endl;
		std::cout << pardon << std::endl;

		myTree.beSigned(human);
		robotomy.beSigned(human);
		pardon.beSigned(human);

		human.signForm(myTree);
		human.signForm(robotomy);
		human.signForm(pardon);

		myTree.execute(human);
		robotomy.execute(human);
		pardon.execute(human);
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
