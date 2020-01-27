/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 08:22:16 by alopez-g          #+#    #+#             */
/*   Updated: 2020/01/27 13:14:51 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	aux;

	aux = 0;
	while (aux < n)
	{
		*(unsigned char *)(dst + aux) = *(unsigned char *)(src + aux);
		if (*(unsigned char *)(dst + aux) == (unsigned char)c)
			return (dst + aux + 1);
		aux++;
	}
	return (0);
}
