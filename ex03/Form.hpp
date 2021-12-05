#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string _FormName, const std::string _FormTarget, int _requiredGrade, int _executedGrade);
	virtual ~Form();
	Form(const Form &target);
	Form &operator=(const Form &target);

	// 관료의 등급이 높으면 서명하는
	void beSigned(Bureaucrat &target);
	int GradeTooHighException();
	int GradeTooLowException();

	std::string getFormName() const;
	std::string getTarget() const;
	bool getIsSigned() const;
	int getRequiredGrade() const;
	int getExecuteGrade() const;

	virtual void execute(Bureaucrat const &executor) = 0;

private:
	std::string formName_;
	std::string formTarget_;
	bool isSigned_;
	int requiredGrade_;
	int executedGrade_;



};

std::ostream& operator<<(std::ostream &outputStream, const Form &ref);


#endif
