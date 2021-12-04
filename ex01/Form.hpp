#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string _FormName,int _requiredGrade, int _executedGrade);
	virtual ~Form();
	Form(const Form &target);
	Form &operator=(const Form &target);

	// 관료의 등급이 높으면 서명하는
	void beSigned(Bureaucrat &target);
	int GradeTooHighException();
	int GradeTooLowException();

	std::string getFormName() const;
	bool getIsSigned() const;
	int getRequiredGrade() const;
	int getExecuteGrade() const;

private:
	std::string FormName_;
	bool isSigned_;
	int requiredGrade_;
	int executedGrade_;



};

std::ostream& operator<<(std::ostream &outputStream, const Form &ref);


#endif
