/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:25:56 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/20 13:44:37 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template < typename T>
typename T::iterator easyfind(T & intContainer, int toFind)
{
	return std::find(intContainer.begin(), intContainer.end(), toFind);
}

#endif