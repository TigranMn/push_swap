/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmnatsak <tmnatsak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:01:39 by tmnatsak          #+#    #+#             */
/*   Updated: 2023/05/06 12:01:40 by tmnatsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (*s != (char )c))
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
