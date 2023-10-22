/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:51:14 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/22 15:51:16 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename Iter>
void	iter(Iter *address, int length, void(*func)(Iter &ref))
{
	if (address == NULL || length == 0 || func == NULL)
		return ;
	for (int i = 0; i < length; i++)
		func(address[i]);
}

template <typename Print>
void	print(Print data)
{
	std::cout << data << std::endl;
}

#endif
