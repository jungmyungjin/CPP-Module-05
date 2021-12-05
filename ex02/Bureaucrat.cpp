#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
	grade_ = 0;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
{
	name_ = _name;
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();

	grade_ = _grade;
}


Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &target)
{
	name_ = target.name_;
	grade_ = target.grade_;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &target)
{
	name_ = target.grade_;
	grade_ = target.grade_;
}

std::string Bureaucrat::getName() const
{
	return (name_);
}

unsigned Bureaucrat::getGrade() const
{
	return (grade_);
}

void Bureaucrat::setIncreaseGrade()
{
	if (grade_ > 1)
		grade_--;
	else if (grade_ == 1)
		throw GradeTooHighException();
}

void Bureaucrat::setDecreaseGrade()
{
	if (grade_ < 150)
		grade_++;
	else if (grade_ == 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) {

	if (form.getIsSigned() == 1)
	{
		std::cout << name_ << " signs " << form.getFormName() << std::endl;
	}
	else
	{
		std::cout << name_ << " cannot sign " << form.getFormName() << " because ";

		if (grade_ > form.getExecuteGrade() && grade_ > form.getRequiredGrade())
			std::cout << "all grade is low.";
		else if (grade_ > form.getExecuteGrade())
			std::cout << "execute grade is low.";
		else if (grade_ > form.getRequiredGrade())
			std::cout << "required grade is low.";
		else
			std::cout << name_ << " didn't receive the payment.";
		std::cout << std::endl;
	}
}

int Bureaucrat::GradeTooHighException()
{
	std::cout << "[Grade Too High Exception]" << std::endl;
	return (-1);
}

int Bureaucrat::GradeTooLowException()
{
	std::cout << "[Grade Too Low Exception]" << std::endl;
	return(1);
}

void Bureaucrat::executeForm(Form const &form)
{
	if (grade_ >= form.getExecuteGrade())
	{
		std::cout << name_ << " cannot sign " << form.getFormName() << " because ";
		std::cout << "execute grade is low.";
	}
	else
	{
		std::cout << name_ << " executes " << form.getFormName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref)
{
	outputStream << ref.getName() << ", grade : " << ref.getGrade();
	return (outputStream);
}

