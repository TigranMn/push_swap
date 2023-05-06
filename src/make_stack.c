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
