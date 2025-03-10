/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:25:59 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/06 15:31:15 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main( void ) {
	int	int_array[3] = {5, 13, -8};
	char	char_array[] = "hello world";
	std::string	string_array[3] = {"bonjour", "monsieur", "martin"};

	std::cout<<"int_array = ";
	::iter(int_array, 3, &printvalue<int>);
	std::cout<< std::endl <<"char_array = ";
	::iter(char_array, 12, &printvalue<char>);
	std::cout<< std::endl <<"string_array = ";
	::iter(string_array, 3, &printvalue<std::string>);

	std::cout<<std::endl<<"*****plusone function*****"<<std::endl;
	::iter(int_array, 3, &ft_double<int>);
	::iter(char_array, 12, &ft_double<char>);
	::iter(string_array, 3, &ft_double<std::string>);

	std::cout<< std::endl <<"int_array = ";
	::iter(int_array, 3, &printvalue<int>);
	std::cout<<std::endl<<"char_array = ";
	::iter(char_array, 12, &printvalue<char>);
	std::cout<<std::endl<<"string_array = ";
	::iter(string_array, 3, &printvalue<std::string>);
}