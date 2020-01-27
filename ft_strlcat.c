/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:39:45 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/27 14:14:59 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	aux;
	size_t	len;

	aux = 0;
	if (dstsize <= ft_strlen(dst) || dstsize == 0 || !dst)
		return (ft_strlen(src) + dstsize);
	len = ft_strlen(dst);
	while (*dst)
		dst++;
	while (*(src + aux) && aux < (dstsize - len - 1))
	{
		*(dst + aux) = *(src + aux);
		aux++;
	}
	if (aux <= dstsize)
		*(dst + aux) = 0;
	return (len + ft_strlen(src));
}
