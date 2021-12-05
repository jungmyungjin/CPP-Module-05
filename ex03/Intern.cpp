#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
	for(int i = 0; i < 3; i++)
		delete forms[i];
}

Intern::Intern(const Intern &_target)
{
	forms[0] = _target.forms[0];
	forms[1] = _target.forms[1];
	forms[2] = _target.forms[2];
}

Intern &Intern::operator=(const Intern &_target)
{
	return (*this);
}

Form *Intern::makeForm(const std::string _formName, const std::string _formTarget)
{

	forms[0] = new ShrubberyCreationForm(_formTarget);
	forms[1] = new RobotomyRequestForm(_formTarget);
	forms[2] = new PresidentPardonForm(_formTarget);

	for(int i=0; i<3; i++)
	{
		if (_formName == forms[i]->getFormName())
			return (forms[i]);
	}
	throw "It's an unknown format name.";
}

