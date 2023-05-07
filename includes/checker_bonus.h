/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmnatsak <tmnatsak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:01:09 by tmnatsak          #+#    #+#             */
/*   Updated: 2023/05/06 12:01:11 by tmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "push_swap.h"

void	get_command(t_list **a, t_list **b);
void	do_command(t_list **a, t_list **b, char *line);
int		arg_count2(char **argv, int argc);
void	final_check(t_list **a, t_list **b, int arg_count);
int		is_sorted(t_list **a);
int		input_valid(char *line);

#endif
