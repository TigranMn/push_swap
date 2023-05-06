#include "../includes/push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (*s != (char )c))
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
