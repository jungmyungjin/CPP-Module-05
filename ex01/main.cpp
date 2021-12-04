#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		// 예외 처리 예제
		{
//			Form project1("project 1", 1000, -3);
//			Form project1("project 1", 10, -3);
		}

		// 일반 예제 1
		{
			// 관료 생성
			Bureaucrat human("Olivia", 3);
			std::cout << human << std::endl;

			// 결제 폼 작성
			Form project1("project 1", 3, 3);

			// 결제를 받는다.
			project1.beSigned(human);

			// 결제를 출력한다.
			human.signForm(project1);

			// Form에 대한 정보 출력
			std::cout << project1 << std::endl;
		}

		// 일반 예제 2
//		{
//			// 관료 생성
//			Bureaucrat human("Olivia", 3);
//			std::cout << human << std::endl;
//
//			// 결제 폼 작성
//			Form project1("project 1", 3, 2);
////			Form project1("project 1", 1, 3);
//
//			// 결제를 받는다.
//			project1.beSigned(human);
//
//			// 결제를 출력한다.
//			human.signForm(project1);
//
//			// Form에 대한 정보 출력
//			std::cout << project1 << std::endl;
//		}
	}
	catch (const char *str)
	{
		std::cout << str << std::endl;
	}
	catch (int x)
	{
		if (x == 1)
			std::cout << "The grade 150 is the lowest, so you can't lower the grade any more." << std::endl;
		else if(x == -1)
			std::cout << "Grade 1 is the highest grade, so you can't raise your grade any more." << std::endl;
	}

	return (0);
}
