/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apieniak <apieniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:29:42 by apieniak          #+#    #+#             */
/*   Updated: 2025/05/31 21:07:47 by apieniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

# define STYRTA_SIE_PALI 998
# define SYNA_NIE_MA_W_DOMU 997


typedef struct s_data
{
	int		*stack_a;
	int		*stack_b;
	int		size;
	int		size_a;
	int		size_b;

}	t_data;

int		argc_checker(int argc, char **argv, t_data *data);
char	*join_strings(int argc, char **argv);
void	text_error(char *error, t_data *data);
char	*single_space(const char *str);
void	s_arg(char **argv, t_data *data);
void	m_arg(int argc, char **argv, t_data *data);
int		count_words(char *str);
void	ft_swap(int *a, int *b);
void	correct_chars(char *str, t_data *data);
void	check_minus(char *str, int len, t_data *data);
void	init_tabs(t_data *data, char *str);
void	safe_exit(t_data *data);

//moves
void	sa(t_data *data, int action);
void	sb(t_data *data, int action);
void	ss(t_data *data);
void	pa(t_data *data, int action);
void	pb(t_data *data, int action);
void	ra(t_data *data, int action);
void	rb(t_data *data, int action);
void	rr(t_data *data);
void	rra(t_data *data, int action);
void	rrb(t_data *data, int action);
void	rrr(t_data *data);

#endif