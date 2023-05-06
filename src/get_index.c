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

int	*make_array(char **arg, int size)
{
	int		i;
	int		j;
	char	*str;
	int		*arr;
	char	**splitted;
	long	num;

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
	ft_free(splitted);
	return (arr);
}
