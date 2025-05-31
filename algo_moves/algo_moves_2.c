/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:01:38 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/31 19:54:26 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//ra (rotate a): Shift up all elements of stack a by 1.
//The first element becomes the last one.

void	ra(t_data *data, int action)
{
	int	first;
	int	i;

	if (data->size_a < 2)
		return ;
	first = data->stack_a[0];
	i = 0;
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[data->size_a - 1] = first;

	if (action == STYRTA_SIE_PALI)
		ft_printf("ra\n");
}

//rb (rotate b): Shift up all elements of stack b by 1.
//The first element becomes the last one.

void	rb(t_data *data, int action)
{
	int	first;
	int	i;

	if (data->size_b < 2)
		return ;
	first = data->stack_b[0];
	i = 0;
	while (i < data->size_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[data->size_b - 1] = first;
	if (action == STYRTA_SIE_PALI)
		ft_printf("rb\n");
}

//rr : ra and rb at the same time.

void	rr(t_data *data)
{
	ra(data, SYNA_NIE_MA_W_DOMU);
	rb(data, SYNA_NIE_MA_W_DOMU);
	ft_printf("rr\n");
}


