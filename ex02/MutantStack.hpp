/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:59:11 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/21 12:51:58 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H_
# define MUTANT_STACK_H_
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> 
{
private:

public:
    typedef typename std::stack<T>::container_type container_type;
    typedef typename container_type::iterator iterator;
    typedef typename container_type::const_iterator const_iterator;
    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
    typedef std::reverse_iterator<iterator> reverse_iterator;

    iterator begin(void) { return this->c.begin(); }
    iterator end(void) { return this->c.end(); }
    const_iterator cbegin(void) const { return this->c.cbegin(); }
    const_iterator cend(void) const { return this->c.cend(); }
    const_reverse_iterator rbegin(void) const { return this->c.rbegin(); }
    const_reverse_iterator rend(void) const { return this->c.rend(); }
    reverse_iterator rbegin(void) { return this->c.rbegin(); }
    reverse_iterator rend(void) { return this->c.rend(); }
	

};

#endif