/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:35:16 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/20 17:47:28 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	//Tests main
	std::cout << "Tests main : " << std::endl;
	Span sp(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp << std::endl;
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	//large span
	std::cout << "Tests large span : " << std::endl;
	Span sp2(10000);
	std::vector<int> myVector;
	for(int i = 0; i < 10000; i++)
		myVector.push_back(i);
	sp2.addRange(myVector.begin(), myVector.end());
	
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	//exceptions
	std::cout << "Tests exceptions: " << std::endl;
    Span sp3(2);
    try {
        sp3.addNumber(0);
        std::cout << sp3 << std::endl;
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
		sp3.addNumber(1);
        std::cout << sp3 << std::endl;
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
		sp3.addNumber(2);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }


	return 0;
}