/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:11:02 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/18 20:28:46 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 2;
	while (i >= argc)
	{
		correct_chars(argc, argv[i]);
		i++;
	}

	printf("\nProgram stopped working properly");
	return (0);
}