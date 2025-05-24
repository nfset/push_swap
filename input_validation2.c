/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:29:17 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/24 22:41:47 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	loop_arguments(int argc, char **argv)
{
	int	i;
	int	flag;

	argc_checker(argc);
	i = 1;
	flag = 0;
	//while (!argv[i])
		//i++;
	printf("%s", argv[i]);
	while (i <= argc)
	{
		flag = 1;
		correct_chars(argv[i]);
		i++;
	}
	if (flag != 1)
		text_error("All inputs are empty");
}



void	correct_chars(char *str)
{
	int	i;

	i = 0;

	if (!str[i])
		return ;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			i++;
			continue ;
		}
		if (str[i] < '0' || str[i] > '9')
			text_error("Invalid input, unknown 'number' character\n");
		i++;
	}
}

void	text_error(char *error)
{
	ft_printf("%s", error);
	exit(1);
}

void	argc_checker(int argc)
{
	if (argc == 2)
	{
	}
	else if (argc > 2)
	{
	}
	else
	{
		ft_printf("Not enough arguments\n");
		exit(1);
	}

}

//void	join_arguments(char *arg)
//{

//}