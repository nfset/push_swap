/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_utils_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:36:42 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/28 17:11:15 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_minus(char *str, int len, t_data *data)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < len)
	{
		if (str[i] == '-' && (str[i + 1] < '0' || str[i + 1] > '9'))
			flag = 1;
		i++;
	}
	if (flag)
		text_error("Minus is too far away from number", data);
}


void	init_tabs(t_data *data, char *str)
{
	char	**ch_array;
	int		i;

	i = 0;
	ch_array = ft_split(str, ' ');
	while (i < data->size)
	{
		data->stack_a[i] = ft_atoi(ch_array[i]);
		i++;
	}
	i = 0;
	while (i < data->size)
	{
		printf("%d\n", data->stack_a[i]);
		free(ch_array[i]);
		i++;
	}
	free(ch_array);
	free(str);
	safe_exit(data);
}

void	m_arg(int argc, char **argv, t_data *data)
{
	int		len;
	char	*str;
	char	*tmp;
	char	*spaced;

	tmp = join_strings(argc, argv);
	spaced = single_space(tmp);
	str = ft_strtrim(spaced, "\n ");
	free(tmp);
	free(spaced);
	if (!str)
		text_error("Empty String Error", data);
	len = ft_strlen(str);
	correct_chars(str, data);
	check_minus(str, len, data);
	data->size = count_words(str);
	data->stack_a = ft_calloc(data->size + 1, sizeof(int));
	data->stack_b = ft_calloc(data->size + 1, sizeof(int));
	init_tabs(data, str);
}
