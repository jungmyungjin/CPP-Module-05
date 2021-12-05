
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form::Form("RobotomyRequestForm", "none", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form::Form("RobotomyRequestForm", _target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm)
{
	return (*this);
}

// 드릴 소리를 내며 <target>이 50%의 확률로 성공적으로 로봇화되었다고 알려주십시오. 그렇지 않으면 실패라고 알려주십시오.
void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	// 서명 안되어 있음
	if (getIsSigned() == false)
		throw "It's not signed.";
	// 실행 권한 부족
	if (getExecuteGrade() < executor.getGrade())
		throw executor.getName().append("'s execution authority is insufficient.");
	Robotization();
}

void RobotomyRequestForm::Robotization()
{
	std::cout << "Drrrrrrrr... Drrrrrr... Drr!" << std::endl;
	srand((unsigned int)time(NULL));
	if (rand() % 2 == 0)
	{
		std::cout << Form::getTarget() << " has become a robot." << std::endl;
	}
	else
	{
		std::cout << "Fail.... :(" << std::endl;
	}
}