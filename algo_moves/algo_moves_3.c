/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:34:23 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/31 20:11:04 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



//rra (reverse rotate a): Shift down all elements of stack a by 1.
//The last element becomes the first one.

void	rra(t_data *data, int action)
{
	int	last;
	int	i;

	if (data->size_a < 2)
		return ;
	i = data->size_a - 1;
	last = data->stack_a[i];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = last;
	if (action == STYRTA_SIE_PALI)
		ft_printf("rra\n");
}
// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

void	rrb(t_data *data, int action)
{
	int	last;
	int	i;

	if (data->size_b < 2)
		return ;
	i = data->size_b - 1;
	last = data->stack_b[i];
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = last;
	if (action == STYRTA_SIE_PALI)
		ft_printf("rrb\n");
}
//rrr : rra and rrb at the same time.

void	rrr(t_data *data)
{
	rra(data, SYNA_NIE_MA_W_DOMU);
	rrb(data, SYNA_NIE_MA_W_DOMU);
	ft_printf("rrr\n");
}