#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
	grade_ = 0;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
{
	name_ = _name;
	if (_grade < 1)
		throw ("Grade 1 is the highest grade, so you can't raise your grade any more.");

	else if (_grade > 150)
		throw ("The grade 150 is the lowest, so you can't lower the grade any more.");

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
		throw ("Grade 1 is the highest grade, so you can't raise your grade any more.");
}

void Bureaucrat::setDecreaseGrade()
{
	if (grade_ < 150)
		grade_++;
	else if (grade_ == 150)
		throw ("The grade 150 is the lowest, so you can't lower the grade any more.");
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
		std::cout << std::endl;
	}
}

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref)
{
	outputStream << ref.getName() << ", grade : " << ref.getGrade();
	return (outputStream);
}

