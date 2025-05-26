/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_valid_join.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:31:31 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/26 20:49:45 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	text_error(char *error)
{
	ft_printf("%s", error);
	exit(1);
}

char	*single_space(const char *str)
{
	int		i;
	int		j;
	int		len;
	char	*result;

	len = ft_strlen(str);
	result = malloc(len + 1);
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
	char	*main_string;

	i = 1;
	main_string = (char *)malloc(sizeof(char) * 1);
	main_string[0] = '\n';
	while (i < argc)
	{
		main_string = ft_strjoin(main_string, argv[i]);
		if (i != argc - 1)
			main_string = ft_strjoin(main_string, " ");
		i++;
	}
	main_string = single_space(main_string);
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
		//m_arg(argc, argv, data);
		//array_char = ft_split(join_strings(argc, argv), ' ');
	}
	else if (argc <= 1)
		text_error("Not enough arguments");
	return (i);
}
