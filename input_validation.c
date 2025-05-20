/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:29:17 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/18 20:33:44 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	correct_chars(int num, char *str)
{
	int	i;

	argc_checker(num);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '0' || str[i] < '9')
		{
			ft_printf("Invalid input, unknown 'number' character");
			exit(1);
		}
		i++;
	}
	argc_checker(num);
}

void	argc_checker(int argc)
{
	if (argc == 2)
	{
		ft_printf("There is only one argument");
	}
	else if (argc > 2)
	{
		ft_printf("\nMore than one argument\n");
	}
	else
		ft_printf("Not enough arguments");

}

void	join_arguments(char *arg)
{

}