/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:29:42 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/26 20:49:52 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_data
{
	int		*stack_a;
	int		*stack_b;
	int		size;

}	t_data;

int		argc_checker(int argc, char **argv, t_data *data);
char	*join_strings(int argc, char **argv);
void	text_error(char *error);
char	*single_space(const char *str);
void	s_arg(char **argv, t_data *data);
void	m_arg(int argc, char **argv, t_data *data);
int		count_words(char *str);
void	correct_chars(char *str);

#endif