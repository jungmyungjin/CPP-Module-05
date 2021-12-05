
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
	isSigned_ = 0;
	requiredGrade_ = 0;
	executedGrade_ = 0;

}

// 등급 설정에 대한 오류는 여기서만
Form::Form(std::string _formName, const std::string _formTarget, int _requiredGrade, int _executedGrade)
{
	isSigned_ = 0;
	formName_ = _formName;
	if (_requiredGrade < 1 || _executedGrade < 1 )
		throw GradeTooHighException();
	else if (_requiredGrade > 150 || _executedGrade > 150 )
		throw GradeTooLowException();

	requiredGrade_ = _requiredGrade;
	executedGrade_ = _executedGrade;
	formTarget_ = _formTarget;
}

Form::~Form()
{

}

Form::Form(const Form &target) {
	formName_ = target.formName_;
	isSigned_ = target.isSigned_;
	executedGrade_ = target.executedGrade_;
	requiredGrade_ = target.requiredGrade_;
}

Form &Form::operator=(const Form &target)
{
	formName_ = target.formName_;
	isSigned_ = target.isSigned_;
	executedGrade_ = target.executedGrade_;
	requiredGrade_ = target.requiredGrade_;
}

std::string Form::getFormName() const
{
	return (formName_);
}
bool Form::getIsSigned() const
{
	return (isSigned_);
}

int Form::getRequiredGrade() const
{
	return (requiredGrade_);
}

int Form::getExecuteGrade() const
{
	return (executedGrade_);
}

std::string Form::getTarget() const
{
	return(formTarget_);
}

// 결제 실패에 대한 오류처리는 여기서만.
void Form::beSigned(Bureaucrat &target) {
	if (target.getGrade() <= requiredGrade_)
		isSigned_ = 1;
}

int Form::GradeTooHighException()
{
	std::cout << "[Grade Too High Exception]" << std::endl;
	return (-1);
}

int Form::GradeTooLowException()
{
	std::cout << "[Grade Too Low Exception]" << std::endl;
	return(1);
}

void Form::execute(Bureaucrat const &executor)
{}

std::ostream& operator<<(std::ostream &outputStream, const Form &ref)
{
	outputStream <<
	"[ " << ref.getFormName() << " ]" << std::endl
	<< "Required grade : " << ref.getRequiredGrade()  << std::endl
	<< "Executed grade : " << ref.getExecuteGrade()  << std::endl;
	return (outputStream);
}

