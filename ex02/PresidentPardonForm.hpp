#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

// PresidentPardonForm grade : sgin 25, exec 5
class PresidentPardonForm: public virtual Form
{
public:
	PresidentPardonForm();
	PresidentPardonForm(std::string _target);
	~PresidentPardonForm();
	PresidentPardonForm(const PresidentPardonForm &PresidentPardonForm);
	PresidentPardonForm &operator=(const PresidentPardonForm &PresidentPardonForm);

	// <target>_shrubbery라는 파일을 작성하고 현재 디렉토리에서 그 안에 ASCII 트리를 작성하십시오.
	void execute(Bureaucrat const &executor);

private:
	void pardon();
};


#endif
