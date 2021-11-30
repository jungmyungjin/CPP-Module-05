#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &target);
	Bureaucrat &operator=(const Bureaucrat &target);

	std::string getName() const;
	unsigned getGrade() const;
	void setIncreaseGrade();	// 등급을 높인다
	void setDecreaseGrade();	// 등급을 낮춘다

private:
	std::string name_;
	int grade_;

};

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref);

#endif
