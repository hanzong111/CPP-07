/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:51:25 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/22 15:51:27 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string	stringArray[3] = {"Hi", "Hello", "World"};
	int			intArray[3] = {42, 24, 69};
	float 		array[3] = {42.69, 2.43, 69.123};

	std::cout << "\n---------- EX01 String Test ----------\n" << std::endl;
	iter(stringArray, 3, print);
	std::cout << "\n---------- EX01 Int Test ----------\n" << std::endl;
	iter(intArray, 3, print);
	std::cout << "\n---------- EX01 Float Test ----------\n" << std::endl;
	iter(array, 3, print);
	return (0);
}
