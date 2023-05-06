#include "../includes/push_swap.h"

int	ft_sqrt(int num)
{
	int	i;

	i = 2;
	while (i * i < num)
		i++;
	return (i - 1);
}

int	log_two(int nb)
{
	int	n;

	n = 0;
	while (nb)
	{
		nb /= 2;
		n ++;
	}
	return (n);
}
