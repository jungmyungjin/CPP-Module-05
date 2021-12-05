#include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm() : Form::Form("PresidentPardonForm", "none", 25, 5)
{
}

PresidentPardonForm::PresidentPardonForm(std::string _target) : Form::Form("PresidentPardonForm", _target, 25, 5)
{
}

PresidentPardonForm::~PresidentPardonForm()
{

}

PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm &PresidentPardonForm)
{

}

PresidentPardonForm &PresidentPardonForm::operator=(const PresidentPardonForm &ShrubberyCreationForm)
{
	return (*this);
}

// Zafod Beeblebrox가 <target>을 사면했다고 알려줍니다.
void PresidentPardonForm::execute(Bureaucrat const &executor)
{
	// 서명 안되어 있음
	if (getIsSigned() == false)
		throw "It's not signed.";
	// 실행 권한 부족
	if (getExecuteGrade() < executor.getGrade())
		throw executor.getName().append("'s execution authority is insufficient.");
	pardon();
}

void PresidentPardonForm::pardon() {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
