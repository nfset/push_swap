/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_valid_join.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:31:31 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/28 17:03:52 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	safe_exit(t_data *data)
{
	if (data->stack_a)
		free(data->stack_a);
	if (data->stack_b)
		free(data->stack_b);
	free(data);
	exit(1);
}

void	text_error(char *error, t_data *data)
{
	ft_printf("%s", error);
	safe_exit(data);
}

char	*single_space(const char *str)
{
	int		i;
	int		j;
	int		len;
	char	*result;

	len = ft_strlen(str);
	result = ft_calloc(len + 1, 1);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			result[j++] = str[i];
		else
		{
			result[j++] = ' ';
			while (str[i] == ' ')
				i++;
			i--;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}

char	*join_strings(int argc, char **argv)
{
	int		i;
	char	*tmp;
	char	*main_string;

	i = 1;
	main_string = ft_strdup("");
	while (i < argc)
	{
		if (argv[i][0] != '\0')
		{
			tmp = ft_strjoin(main_string, argv[i]);
			free(main_string);
			main_string = tmp;

			if (i < argc - 1)
			{
				tmp = ft_strjoin(main_string, " ");
				free(main_string);
				main_string = tmp;
			}
		}
		i++;
	}
	return (main_string);
}

int	argc_checker(int argc, char **argv, t_data *data)
{
	int		i;
	//char	**array_char;

	i = 0;
	if (argc == 2)
	{
		s_arg(argv, data);
		//array_char = ft_split(single_space(argv[1]), ' ');
	}
	else if (argc > 2)
	{
		m_arg(argc, argv, data);
		//array_char = ft_split(join_strings(argc, argv), ' ');
	}
	else if (argc <= 1)
		text_error("Not enough arguments", data);
	return (i);
}
