//
// Created by 정명진 on 2021/12/04.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

class Bureaucrat;

// Required grade : sgin 145, exec 137
class ShrubberyCreationForm : public virtual Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ShrubberyCreationForm);

	// <target>_shrubbery라는 파일을 작성하고 현재 디렉토리에서 그 안에 ASCII 트리를 작성하십시오.
	void execute(Bureaucrat const &executor);

private:
	void makeTree();
};

#endif
