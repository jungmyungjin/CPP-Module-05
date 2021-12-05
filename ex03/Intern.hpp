#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Intern
{
public:
	Intern(void);
	virtual ~Intern(void);
	Intern(const Intern &_target);
	Intern &operator=(const Intern &_target);

	Form *makeForm(std::string _formName, std::string _fromTarget);

private:
	Form *forms[3];


};

#endif
