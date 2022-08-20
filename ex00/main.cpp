/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:15:46 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/20 14:02:09 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>

int main(void)
{
	//int containers
    std::vector<int> myVector;
    std::list<int> myList;
    std::deque<int> myDeque;

    for (int i = 0; i < 5; i++) {
        myVector.push_back(i);
        myList.push_back(i);
        myDeque.push_back(i);
    }

	//vector tests
	std::cout << "With vector :" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << myVector[i] << " ";
	std::cout << std::endl;
	std::vector<int>::iterator it;
	//find element in container
	it = easyfind(myVector, 2);
	if (it != myVector.end())
		std::cout << "Element found : " << *it << std::endl;
	else
		std::cout << "Element not found" << std::endl;
	//find element not in container
	it = easyfind(myVector, 5);
	if (it != myVector.end())
		std::cout << "Element found : " << *it << std::endl;
	else
		std::cout << "Element not found" << std::endl;

	//list tests
	std::cout << "With list :" << std::endl;
	std::list<int>::iterator it2;
	for (it2 = myList.begin(); it2 != myList.end(); it2++)
		std::cout << *it2 << " ";
	std::cout << std::endl;
	//find element in container
	it2 = easyfind(myList, 2);
	if (it2 != myList.end())
		std::cout << "Element found : " << *it2 << std::endl;
	else
		std::cout << "Element not found" << std::endl;
	//find element not in container
	it2 = easyfind(myList, 5);
	if (it2 != myList.end())
		std::cout << "Element found : " << *it2 << std::endl;
	else
		std::cout << "Element not found" << std::endl;

	//deque tests
	std::cout << "With deque :" << std::endl;
	std::deque<int>::iterator it3;
	for (it3 = myDeque.begin(); it3 != myDeque.end(); it3++)
		std::cout << *it3 << " ";
	std::cout << std::endl;
	//find element in container
	it3 = easyfind(myDeque, 2);
	if (it3 != myDeque.end())
		std::cout << "Element found : " << *it3 << std::endl;
	else
		std::cout << "Element not found" << std::endl;
	//find element not in container
	it3 = easyfind(myDeque, 5);
	if (it3 != myDeque.end())
		std::cout << "Element found : " << *it3 << std::endl;
	else
		std::cout << "Element not found" << std::endl;

	
}