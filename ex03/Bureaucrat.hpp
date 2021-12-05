#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"
#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	virtual ~Bureaucrat();
	Bureaucrat(const Bureaucrat &target);
	Bureaucrat &operator=(const Bureaucrat &target);

	std::string getName() const;
	unsigned getGrade() const;
	void setIncreaseGrade();	// 등급을 높인다
	void setDecreaseGrade();	// 등급을 낮춘다
	int GradeTooHighException();
	int GradeTooLowException();

	void signForm(Form &form);
	void executeForm(Form const &form);

private:
	std::string name_;
	int grade_;

};

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref);

#endif
