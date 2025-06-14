/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:11:02 by apieniak          #+#    #+#             */
/*   Updated: 2025/06/04 16:17:20 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int	main(int argc, char **argv)
{
	t_data	*data;

	data = ft_calloc(1, sizeof(t_data));
	if (!data)
		exit(1);
	argc_checker(argc, argv, data);
	if (has_duplicates(data))
	{
		ft_printf("Array has duplicates\n");
		safe_exit(data);
	}
	if (is_sorted(data))
		safe_exit(data);
	start_turk(data);
	safe_exit(data);
	printf("\nProgram stopped working properly\n");
	return (0);
}
