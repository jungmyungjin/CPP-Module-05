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

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref)
{
	outputStream << ref.getName() << ", bureaucrat grade" << ref.getGrade();
	return (outputStream);
}

