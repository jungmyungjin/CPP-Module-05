/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:19:10 by mjung             #+#    #+#             */
/*   Updated: 2021/12/16 20:19:10 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

/*
 * Bureaucrat : 관료 클래스
 * 등급 : 1 ~ 150
 * 최저 등급 = 150
 * 최고 등급 = 1
 */
int main(void)
{
	try
	{
//		0. 기본 동작
		Bureaucrat human("Judy", 50);
		std::cout << human << std::endl;

//		1. 범위 초과 등급으로 선언 (에러)
//		Bureaucrat human("Judy", 1150);

//		2. 범위 미만 등급으로 선언 (에러)
//		Bureaucrat human("Judy", -1);

//		3. 등급 올리는 함수 사용
//		Bureaucrat human("Judy", 5);
//		human.setIncreaseGrade();
//		std::cout << human << std::endl;

//		4. 등급 낮추는 함수 사용
//		Bureaucrat human("Judy", 5);
//		human.setDecreaseGrade();
//		std::cout << human << std::endl;

//		5. 범위 외 등급으로 높힐때 (에러)
//		Bureaucrat human("Judy", 1);
//		human.setIncreaseGrade();

//		6. 범위 외 등급으로 낮출떄 (에러)
//		Bureaucrat human("Judy", 150);
//		human.setDecreaseGrade();

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
