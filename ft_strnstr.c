/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 09:57:41 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/29 03:07:55 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		aux;
	size_t	i;

	i = 0;
	if (haystack == needle)
		return ((char *)haystack);
	if (*needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack && i < len)
	{
		aux = 0;
		while (*(needle + aux) && *(haystack + aux)
				&& *(haystack + aux) == *(needle + aux) && (i + aux) < len)
			aux++;
		if (!(*(needle + aux)))
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (0);
}
