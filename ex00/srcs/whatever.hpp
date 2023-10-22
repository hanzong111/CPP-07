/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:51:03 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/22 16:54:58 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename Swap>
void	swap(Swap &a, Swap &b)
{
	Swap	temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename Min>
Min	&min(Min &a, Min &b)
{
	return (a < b ? a : b);
}

template <typename Max>
Max	&max(Max &a, Max &b)
{
	return (a > b ? a : b);
}

#endif
