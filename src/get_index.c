/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmnatsak <tmnatsak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:01:35 by tmnatsak          #+#    #+#             */
/*   Updated: 2023/05/06 19:33:09 by tmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_index(int *arr, int value, int arg_count)
{
	int	i;

	i = 0;
	while (i < arg_count)
	{
		if (arr[i] == value)
			return (i);
		i++;
	}
	return (0);
}

static void	fill_array(char **splitted, int	*arr, int size)
{
	int		i;
	int		j;
	long	num;

	i = 0;
	j = 0;
	while (j < size)
	{
		num = atoi_long(splitted[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			ft_free(splitted);
			free(arr);
			exit(ft_error());
		}
		arr[j++] = ft_atoi(splitted[i++]);
	}
}

int	*make_array(char **arg, int size)
{
	int		i;
	char	*str;
	int		*arr;
	char	**splitted;

	i = 1;
	str = NULL;
	while (arg[i])
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, arg[i++]);
	}
	splitted = ft_split(str, ' ');
	free(str);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	fill_array(splitted, arr, size);
	ft_free(splitted);
	return (arr);
}
