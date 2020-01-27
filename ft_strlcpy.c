/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:17:52 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/27 13:59:36 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	aux;

	if (!dst || !src)
		return (0);
	aux = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*(src + aux) && aux < dstsize - 1)
	{
		*(dst + aux) = *(src + aux);
		aux++;
	}
	if (aux < dstsize)
		*(dst + aux) = 0;
	return (ft_strlen(src));
}
