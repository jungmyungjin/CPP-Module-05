
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

// Required grade : sgin 72, exec 45
class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string _target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &RobotomyRequestForm);

	// <target>_shrubbery라는 파일을 작성하고 현재 디렉토리에서 그 안에 ASCII 트리를 작성하십시오.
	void execute(Bureaucrat const &executor);

private:
	void Robotization();

};

#endif
