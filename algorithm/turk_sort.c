/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:31:01 by apieniak          #+#    #+#             */
/*   Updated: 2025/06/04 16:23:29 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	start_turk(t_data *data)
{
	if (data->size_a == 2)
	{
		ra(data, STYRTA_SIE_PALI);
		return ;
	}
	pb(data, STYRTA_SIE_PALI);
	pb(data, STYRTA_SIE_PALI);
}