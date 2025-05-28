/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:12:07 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/28 17:32:03 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_data *data)
{
	int	swap;

	if (!data->stack_a[0] && !data->stack_a[1])
		return ;
	if (data->size == 1)
		return ;
	swap = 0;
	data->stack_a[0] = swap;
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = swap;
}

void	sb(t_data *data)
{
	int	swap;

	if (!data->stack_b[0] && !data->stack_b[1])
		return ;
	if (data->size == 1)
		return ;
	swap = 0;
	data->stack_b[0] = swap;
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = swap;
}

void	ss(t_data *data)
{
	sa(data);
	sb(data);
}

void	pa(t_data *data)
{
	if (data->stack_b == NULL)
		return ;
	data->stack_a[0] = data->stack_b[0];
}