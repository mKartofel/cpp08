/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:47:55 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/21 12:59:59 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	//Tests MutantStack
	std::cout << "Tests with MutantStack : " << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) 
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	//Tests List
	std::cout  << std::endl << "Tests with List : " << std::endl;
	std::list<int> myList;

	myList.push_back(5);
	myList.push_back(17);

	std::cout << myList.back() << std::endl;

	myList.pop_back();

	std::cout << myList.size() << std::endl;

	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	//[...]
	myList.push_back(0);

	std::list<int>::iterator itL = myList.begin();
	std::list<int>::iterator iteL = myList.end();
	
	++itL;
	--itL;
	while (itL != iteL) 
	{
		std::cout << *itL << std::endl;
		++itL;
	}
	std::list<int> l(myList);
	
	return 0;
}