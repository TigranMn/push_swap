/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmnatsak <tmnatsak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:01:43 by tmnatsak          #+#    #+#             */
/*   Updated: 2023/05/07 12:31:10 by tmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*fill_list(t_list *a, int *arr, int arg_count)
{
	t_list	*head;
	int		index;

	head = a;
	while (a)
	{
		index = find_index(arr, a->value, arg_count);
		a->index = index;
		a = a->next;
	}
	return (head);
}

t_list	*make_node(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	free_stack(t_list **head)
{
	t_list	*temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
}
