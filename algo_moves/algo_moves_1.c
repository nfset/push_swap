/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:12:07 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/29 18:40:58 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//SA = swap a: Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.

void	sa(t_data *data, int action)
{
	int	swap;

	if (data->size <= 1)
		return ;
	swap = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = swap;
	if (action == STYRTA_SIE_PALI)
		printf("sa\n");
}

//sb (swap b): Swap the first 2 elements at the top of stack b.
//Do nothing if there is only one or no elements.

void	sb(t_data *data, int action)
{
	int	swap;

	if (data->size <= 1)
		return ;
	swap = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = swap;
	if (action == STYRTA_SIE_PALI)
		ft_printf("sb\n");
}

//ss : sa and sb at the same time.

void	ss(t_data *data, int action)
{
	sa(data, SYNA_NIE_MA_W_DOMU);
	sb(data, SYNA_NIE_MA_W_DOMU);
	if (action == STYRTA_SIE_PALI)
		printf("ss\n");
}

//pa (push a) Take the first element at the top of b and put it at the top of a
//Do nothing if b is empty.

void	pa(t_data *data, int action)
{
	if (data->stack_b[0] == NULL)
		return ;
	data->stack_a[0] = data->stack_b[0];
	if (action == STYRTA_SIE_PALI)
		printf("pa\n");
}

//pb (push b) Take the first element at the top of a and put it at the top of b
//Do nothing if a is empty.

void	pb(t_data *data, int action)
{
	if (data->stack_a[0] == NULL)
		return ;
	data->stack_b[0] = data->stack_b[0];
	if (action == STYRTA_SIE_PALI)
		printf("pb\n");
}