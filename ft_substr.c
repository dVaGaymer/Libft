/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 11:28:12 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/27 11:16:12 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	aux;
	char	*str;

	aux = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc(sizeof(char), 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (*(s + start + aux) && aux < len)
	{
		*(str + aux) = *(s + start + aux);
		aux++;
	}
	*(str + aux) = 0;
	return (str);
}
