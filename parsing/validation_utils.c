/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:22:47 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/26 20:52:17 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	correct_chars(char *str)
{
	int	i;

	if (!str[0])
		text_error("EMPTY");
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]) && str[i] != 32 && str[i] != '-')
			text_error("Invalid input, unknown 'number'\n");
		i++;
	}
}

int	count_words(char *str)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
			in_word = 0;
		i++;
	}
	return (count);
}

void	s_arg(char **argv, t_data *data)
{
	char	*str;
	int		len;

	len = ft_strlen(ft_strtrim(single_space(argv[1]), " ") + 1);
	str = malloc(1 * len);
	if (!str)
		text_error("Pointer Error");
	str = ft_strtrim(single_space(argv[1]), " ");
	correct_chars(str);
	data->size = count_words(str);
	ft_printf("str:[X]%s[X]\nSize: %d", str, data->size);
	data->stack_a = malloc(sizeof(int) * (data->size + 1));
	data->stack_b = malloc(sizeof(int) * (data->size + 1));
}
